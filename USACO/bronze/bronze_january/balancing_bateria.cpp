#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; scanf("%d", &n);
    vector<long long> b(n, 0);
    vector<long long> a(n, 0);
    for (int i = 0; i < n; i++) 
    {
        scanf("%lld" , &a[i]);
    }
    // 0 0 0 0 0 -> 1 2 3 4 5 -> 1 3 5 7 9 -> (7x) 1 3 -2 -7 -12 -> 1 3 -2 -7 -12 -> 1 3 -2 -7 5
    long long cnt = 0;
    for (int i = 0; i < n; i++)
    {
        long long diff = a[i] - b[i];
        // printf("%lld ", diff);
        // printf("\n");
        cnt += abs(diff);
        for (int j = i; j < n; j++)
        {
            b[j] += diff * (j - i + 1);
        }
        // for (int p = 0; p < n; p++)
        // {
        //     printf("%lld ", b[p]);
        // }
        // printf("\n");
    }
    printf("%lld\n", cnt);
}