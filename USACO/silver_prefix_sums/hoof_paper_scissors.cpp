#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; scanf("%d", &n);
    // S S P S H
    // 0 1 2 2 3 3
    // 0 0 0 1 1 1
    // 0 0 0 0 0 1  
    vector<int> h(n+1);
    vector<int> s(n+1);
    vector<int> p(n+1);
    for (int i = 1; i < n+1; i++)
    {
        char move; cin >> move;
        p[i] = p[i-1], h[i] = h[i-1], s[i] = s[i-1];
        if (move == 'P') p[i]++;
        else if (move == 'S') s[i]++;
        else if (move == 'H') h[i]++;
    }
    for (int i = 0; i < n+1; i++)
    {
        printf("%d\n", s[i]);
    }
    int max_sum = 0;
    for (int i = 0; i < n+1; i++)
    {
        int before_sum = max(h[i], max(s[i], p[i]));
        int after_sum = max({h[n] - h[i], s[n] - s[i], p[n] - p[i]});
        max_sum = max(max_sum, before_sum + after_sum);
        printf("%d %d %d\n", before_sum, after_sum, max_sum);
    }
    printf("%d\n", max_sum);
}