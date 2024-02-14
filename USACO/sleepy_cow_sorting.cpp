#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N; 
    int A[100];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    // 6 4 2 1 3 5 -> 4 2 1 3 5 6 -> 2 1 3 4 5 6 -> 1 2 3 4 5 6
    // problem equivalent to calculating longest sorted suffix
    int ans = N-1;
    for (int i = N-1; i > 0; i--)
    {
        if (A[i] > A[i-1]) ans = i;
        else break;
    }
    cout << ans << '\n';
    return 0;
}