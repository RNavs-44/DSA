#include <bits/stdc++.h>
using namespace std;

/*
Given int array, return true if any value appears at least twice
Time: O(n), Space: O(n)
*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for (int num: nums)
        {
            // if number has been seen previously then it has duplicate
            if (s.find(num) != s.end()) return true;
            // otherwise, insert into hash set
            s.insert(num);
        }
        return false;
    }
};