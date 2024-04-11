#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q; scanf("%d %d", &n, &q);
    int arr[n];
    int cnt[n+1][3];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    cnt[0][0] = 0, cnt[0][1] = 0, cnt[0][2] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 3; j++) cnt[i][j] = cnt[i-1][j];
        cnt[i][arr[i-1]-1] ++;
    }
    for (int i = 0; i < q; i++)
    {   
        int l, r; scanf("%d %d", &l, &r);
        for (int i = 0; i < 3; i++) 
        {
            int ans = cnt[r][i] - cnt[l-1][i];
            printf("%d ", ans);
        }
        printf("\n");
    }
    // 2 1 1 3 2 1
    // 0 1 1 1 1 2 2
    // 0 0 1 2 2 2 3
    // 0 0 0 0 1 1 1 

}