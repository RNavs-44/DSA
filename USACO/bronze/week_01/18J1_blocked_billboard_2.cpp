// https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/ZkhTvlw0KgyHrqQ69LD1/problems/oVfgo0CZN1dSSaEVO5U6

#include <bits/stdc++.h>
using namespace std;

struct Rect {
    int x1, y1, x2, y2;
};

int area(Rect r) {
    return (r.x2 - r.x1) * (r.y2 - r.y1);
}

// return if point is covered by rectangle
bool is_covered (int x, int y, Rect r) {
    return (r.x1 <= x && r.x2 >= x && r.y1 <= y && r.y2 >= y);
}

// return how many corners of p covered by q
int corners_covered(Rect p, Rect q) {
    int corner_num = 0;
    if (is_covered(p.x1, p.y1, q)) corner_num++;
    if (is_covered(p.x1, p.y2, q)) corner_num++;
    if (is_covered(p.x2, p.y1, q)) corner_num++;
    if (is_covered(p.x2, p.y2, q)) corner_num++;
    return corner_num;
}

int main() {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    Rect a, b; // a - cow-feeder, b - lawnmower

    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    

    // count how many corners covered
    int corner_num = corners_covered(b, a);
    
    // if fewer than 2 corners covered, whole rect must be covered
    if (corner_num < 2) cout << area(b) << endl;
    // if all 4 corners covered nothing to do
    else if (corner_num == 0) cout << 0 << endl;
    // find intersection of rectangles and subtract
    else {
        Rect i; // intersection rectangle
        i.x1 = max(a.x1, b.x1); i.x2 = min(a.x2, b.x2);
        i.y1 = max(a.y1, b.y1); i.y2 = min(a.y2, b.y2);
        cout << area(b) - area(i) << endl;
    }

    return 0;
}