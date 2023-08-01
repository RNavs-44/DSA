#include <bits/stdc++.h>

int main() {
    int ans = 0, curr = 0, max, n, x; std::cin >> max >> n;
    std::string s;
    while (n--) {
        std::cin >> s >> x;
        if (s == "enter") {
            if (x+curr <= max) curr += x;
            else ans++;
        }
        else curr -= x;
    }
    std::cout << ans;
}