// https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/ZkhTvlw0KgyHrqQ69LD1/problems/ZDVpT93Co02hgP80HDgG

#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[7];
    for (int i = 0; i < 7; i++) cin >> nums[i];
    sort(nums, nums + 7);
    int a = nums[0]; int b = nums[1]; int c = nums[6] - (a + b);
    cout << a << " " << b << " " << c << endl;

    return 0;
}