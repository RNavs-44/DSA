// https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/ZkhTvlw0KgyHrqQ69LD1/problems/xWWpKqF6flpFOJ3PUybh

#include <bits/stdc++.h>
using namespace std;

const int MAX_POS = 2000;
bool visible[MAX_POS][MAX_POS];


int main() {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    int x1, x2, y1, y2;

    for (int i = 0; i < 3; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        // change coordinate range from -1000 to 1000 to 0 to 2000
        x1 += (MAX_POS / 2); x2 += (MAX_POS / 2);
        y1 += (MAX_POS / 2); y2 += (MAX_POS / 2);
        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                // set visible to True for billboards, False for truck
                visible[x][y] = i < 2;
            }
        }
    }

    int ans = 0;
    for (int x = 0; x < MAX_POS; x++) {
        for (int y = 0; y < MAX_POS; y++) {
            ans += visible[x][y];
        }
    }

    cout << ans << endl;

    return 0;
}

// alternative solution
// #include <bits/stdc++.h>
// using namespace std;

// struct Rect {
//     int x1, y1, x2, y2;
// };

// int area(Rect r) {
//     return (r.x2 - r.x1) * (r.y2 - r.y1);
// }

// int intersect_area(Rect a, Rect b) {
//     int x_overlap = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
//     int y_overlap = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
//     return x_overlap * y_overlap;
// }

// int main() {
//     freopen("billboard.in", "r", stdin);
//     freopen("billboard.out", "w", stdout);

//     Rect a, b, t; // billboard a, b and truck
//     cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
//     cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
//     cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;

//     cout << area(a) + area(b) - intersect_area(a, t) - intersect_area(b, t) << endl;

//     return 0;
// }