#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n], curr[n], ids[n];
    // A[1, 3, 5, 4, 2]
    // 1 5 2 3 4 -> 1 4 5 3 2 -> 1 2 4 3 5
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ids[i];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            curr[j] = ids[A[j] - 1];
        }
        for (int j = 0; j < n; j++)
        {
            ids[j] = curr[j];
        }
    }
    for (auto i: ids)
    {
        cout << i << endl;
    }
}