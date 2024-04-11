#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x, y;
    scanf("%d %d", &x, &y);

    int dist = 1, total_dist = 0;
    while (true)
    {
        if (((dist > 0) && (x <= y) && (x + dist >= y)) || ((dist < 0) && (x >= y) && (x + dist <= y)))
        {
            cout << total_dist << endl;
            total_dist += abs(y - x);
            break;
        }
        else
        {
            total_dist += 2 * abs(dist);
            dist *= -2;
        }
    }
    cout << total_dist << '\n';
    return 0;
}