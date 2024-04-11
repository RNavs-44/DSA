// https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/ZkhTvlw0KgyHrqQ69LD1/problems/9DHerbuWOcpwh1Yt6BZ1

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    int barn_x, barn_y, rock_x, rock_y, lake_x, lake_y;
    
    for (int y = 0; y < 10; y++) {
        string row; cin >> row;
        for (int x = 0; x < 10; x++) {
            if (row[x] == 'B') {
                barn_x = x; barn_y = y;
            } else if (row[x] == 'R') {
                rock_x = x; rock_y = y;
            } else if (row[x] == 'L') {
                lake_x = x; lake_y = y;
            }
        }
    }

    // initial distance
    int cows = abs(barn_y - lake_y) + abs(barn_x - lake_x) - 1;

    // if B, R and L in same column and R between B and L
    if (rock_x == barn_x && lake_x == barn_x
    && ((lake_y < rock_y && rock_y < barn_y)
    || (barn_y < rock_y && rock_y < lake_y))) {
        cows += 2;
    }

    // if B, R and L in same row and R between B and L
    if (rock_y == barn_y && lake_y == barn_y
    && ((lake_x < rock_x && rock_x < barn_x)
    || (barn_x < rock_x && rock_x < lake_x))) {
        cows += 2;
    }

    cout << cows << endl;

    return 0;
}