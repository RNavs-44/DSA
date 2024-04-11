// https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/yxuk8S2r38bWhaZO3p0S/problems/qI13MszLYqLO9ywNa62e

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    int n; int r[n];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> r[i];

    int min_dist = 99999999;
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int dist = 1; dist < n; dist++) {
            int room = (i+dist) % n;
            total += r[room] * dist;
        }
        min_dist = min(min_dist, total);
    }

    cout << min_dist << endl;

    return 0;
}