#include <bits/stdc++.h>
using namespace std;
/*
Given array of strings
Group anagrams together in any order
*/
class Solution {
public:
    string get_key(string s)
    {
        vector<int> cnt(26, 0);
        string key = "";
        for (char c: s) cnt[c-'a']++;
        for (int i = 0; i < 26; i++)
        {
            key.append(to_string(cnt[i]) + ",");
        }
        return key;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // eat, tea, tan, ate, nat, bat
        // aet, aet, ant, aet, ant, abt
        int n = strs.size();
        vector<vector<string>> res;
        unordered_map<string, vector<string>> m;
        for (string s: strs)
        {
            m[get_key(s)].push_back(s);
        }
        
        for (auto it = m.begin(); it != m.end(); it++)
        {
            res.push_back(it->second);
        }
        return res;
    }
};