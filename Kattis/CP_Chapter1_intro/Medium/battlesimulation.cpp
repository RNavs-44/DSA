#include <bits/stdc++.h>

int main () {
    std::string s; std::cin >> s;
    std::string r = "";
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i]=='R') {
            if ((i < n-2) && ((s[i+1]=='B' && s[i+2]=='L') || (s[i+1]=='L' && s[i+2]=='B'))) {
                r += 'c';
                i += 2;
            }
            else r += 'S';
        }
        else if (s[i]=='B') {
            if ((i < n-2) && ((s[i+1]=='R' && s[i+2]=='L') || (s[i+1]=='L' && s[i+2]=='R'))) {
                r += 'c';
                i += 2;
            }
            else r += 'K';
        }
        else {
            if ((i < n-2) && ((s[i+1]=='R' && s[i+2]=='B') || (s[i+1]=='B' && s[i+2]=='R'))) {
                r += 'c';
                i += 2;
            }
            else r += 'H';
        }
    }
    std::cout << r;
}