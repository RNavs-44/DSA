#include <bits/stdc++.h>
using namespace std;
/*
Given int array of n heights
Represents n vertical lines
Find 2 lines that together with bottom form container with largest area
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int area = 0;
        while (l < r)
        {
            area = max(area, (r - l) * (min(height[l], height[r])));
            if (height[l] <= height[r]) l++;
            else r--;
        }
        return area;
    }
};