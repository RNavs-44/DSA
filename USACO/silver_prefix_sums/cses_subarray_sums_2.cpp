/*
Given array of n integers
Count number of subarrays with sum x
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; scanf("%d %d", &n, &x);
    int psum = 0, ans = 0;
    unordered_map<int, int> sums;
    sums[0] = 1;
    vector<int> a(n);
    // 2 -1 3 5 -2 -> 2 1 4 9 7
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        psum += a[i];
        ans += sums[psum - x];
        sums[psum]++;
    }
    printf("%d\n", ans);
}