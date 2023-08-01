#include <bits/stdc++.h>

int main() {
    int n, m, k, val; scanf("%d", &n);
    int min = 10000;
    std::vector<int> tea(n);
    for (int i = 0; i < n; i ++) {
        scanf("%d", &tea[i]);
    }
    scanf("%d", &m);
    std::vector<int> top(m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &top[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        for(int j = 0; j < k; j++) {
            scanf("%d", &val);
            min = std::min(min, tea[i]+top[val-1]);
        }
    }
    int x; scanf("\n%d", &x);
    int ans = x / min - 1;
    printf("%d", ans);
}