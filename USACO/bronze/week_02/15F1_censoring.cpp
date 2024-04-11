// https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/yxuk8S2r38bWhaZO3p0S/problems/Xxkkz4mnz1dZ0yX4u21O

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);

    string s, t; cin >> s >> t; // what we need to censor and censor word
    string out = "";

    for (int i = 0; i < s.length(); i++) { // iterate through every character of s
        out += s[i]; // append it to out
        // check if out ends with t
        if (out.length() >= t.length() && 
            out.substr(out.size() - t.size()) == t) {
            out.resize(out.size() - t.size());
        }
    }

    cout << out;

    return 0;
}