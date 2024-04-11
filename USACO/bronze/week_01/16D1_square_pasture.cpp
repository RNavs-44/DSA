// https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/ZkhTvlw0KgyHrqQ69LD1/problems/6Um3tsMWaQAc3WEOxliQ

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);

    // take input
    int x1, y1, x2, y2; // first original rectangular pasture
    int x3, y3, x4, y4; // second original rectangultar pasture
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    // find sides of smallest rectangle covering both pastures
    int left, right, top, bottom;
    left = min(x1, x3); right = max(x2, x4);
    top = max(y2, y4); bottom = min(y1, y3);

    // smallest square has side length maximum of rectangle side lengths
    int side = max(right - left, top - bottom);
    cout << side * side << endl; // return area

    return 0;
}