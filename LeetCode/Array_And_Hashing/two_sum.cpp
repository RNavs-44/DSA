#include <bits/stdc++.h>
using namespace std;
/*
Given int array and target 
return indices of 2 numbers that sum to target
Assume each input has exactly 1 solution
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int complement = target - nums[i];
            if (m.find(complement) != m.end())
            {
                return {m[complement], i};
            }
            m.insert({nums[i], i});
        }
        return {};
    }
};