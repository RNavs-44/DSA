#include <bits/stdc++.h>

int main () {
    int n; char b; std::cin >> n >> b;
    std::unordered_map <char, int> dominant, non;
    dominant = {{'A', 11}, {'K', 4},{'Q', 3},{'J', 20},{'T', 10},{'9', 14},{'8', 0},{'7', 0}};
    non = {{'A', 11}, {'K', 4},{'Q', 3},{'J', 2},{'T', 10},{'9', 0},{'8', 0},{'7', 0}};
    n *= 4;
    std::string card;
    int ans = 0;
    while (n--) {
        std::cin >> card;
        if (card[1] == b) ans += dominant[card[0]];
        else ans += non[card[0]];
    }
    std::cout << ans;
}