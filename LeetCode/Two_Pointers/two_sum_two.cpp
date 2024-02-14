#include <bits/stdc++.h>
using namespace std;
/*
Given int array already sorted
Return index of 2 numbers that add to target
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size()-1;
        while (l < r)
        {
            int sum = numbers[l] + numbers[r];
            if (sum == target) return {l+1, r+1};
            else if (numbers[l]+numbers[r] > target) r--;
            else l++;
        }
        return {};
    }
};