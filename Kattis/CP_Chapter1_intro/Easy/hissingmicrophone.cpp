#include <bits/stdc++.h>

int main() {
    std::string s; std::cin >> s;
    bool hiss = false;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == 's' && s[i-1] == 's') {
            hiss = true;
            break;
        }
    }
    if (hiss)std::cout << "hiss";
    else std::cout << "no hiss";
}