#include <bits/stdc++.h>
using namespace std;
/*
Given string s determine if s valid
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> b_stack;
        unordered_map<char, char> brackets = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        for (char c: s)
        {
            if (brackets.find(c) != brackets.end())
            {
                // closing bracket
                if (b_stack.empty()) return false;
                if (b_stack.top() != brackets[c]) return false;
                b_stack.pop();
            }
            else b_stack.push(c);
        }
        return b_stack.empty();
    }
};
