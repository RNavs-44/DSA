#include <bits/stdc++.h>
using namespace std;
/*
Given 2 strings, return true if they are anagrams of each other
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;

        if (s.size() != t.size()) return false;
        for (int i = 0; i < s.size(); i++)
        {
            s_map[s[i]]++;
            t_map[t[i]]++;
        }
        for (int i = 0; i < s_map.size(); i++)
        {
            if (s_map[i] != t_map[i]) return false;
        }
        return true;
        // if (s.size() != t.size()) return false;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // return t == s;
    }
};