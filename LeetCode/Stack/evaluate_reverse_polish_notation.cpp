#include <bits/stdc++.h>
using namespace std;
/*
given array of strings in reverse polish notation
evaluate expression
*/
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_set<string> operands = {
            "+", "-", "/", "*"
        };
        stack<int> s;
        for (string t: tokens)
        {
            if (operands.find(t) != operands.end())
            {
                int b = s.top(); s.pop();
                int a = s.top(); s.pop();
                if (t=="+") s.push(a+b);
                else if(t=="-") s.push(a-b);
                else if(t=="*") s.push(a*b);
                else if(t=="/") s.push(a/b);
            }
            else s.push(stoi(t));
        }
        return s.top();
    }
};