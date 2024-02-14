#include <bits/stdc++.h>
using namespace std;
/*
Given int array and int k
Return k most frequent elements in any order
*/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> freq(n+1);
        vector<int> res;
        unordered_map<int, int> cnt;
        for (int num: nums) cnt[num]++;
        for (auto it = cnt.begin(); it != cnt.end(); it++)
        {
            freq[it->second].push_back(it->first);
        }
        for (int i = n; i >= 0; i--)
        {
            for (int num: freq[i]) res.push_back(num);
            if (res.size() >= k) break;
        }
        return res;
    }
};