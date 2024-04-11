#include <bits/stdc++.h>
using namespace std;

int main() {
    // 0 0 0 0 0 0 0 -> 0 0 0 0 0 0 0
    // 0 0 0 0 1 0 0 -> 0 0 0 0 1 -1 0
    // 0 1 1 1 1 0 0 -> 0 1 0 0 0 -1 0
    // 0 1 1 2 2 1 0 -> 0 1 0 1 0 -1 -1
    // 0 1 2 3 3 1 0 -> 0 1 1 0 0 -2 -1
    int n, k; scanf("%d %d", &n, &k);
    vector<int> cows(n);
    for (int i = 0; i < k; i++)
    {
        int l, r; scanf("%d %d", &l, &r);
        cows[l-1]++, cows[r]--;
    }
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = ans[i-1] + cows[i];
    }
    sort(cows.begin(), cows.end());
}