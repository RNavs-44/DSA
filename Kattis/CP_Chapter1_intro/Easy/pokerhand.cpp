#include <bits/stdc++.h>
int main () {
    std::unordered_map<char, int> freq;
    std::string s;
    int max = -1;
    while (std::cin >> s) {
        freq[s[0]] ++;
    }
    for (auto i : freq) {
        max = std::max(max, i.second);
    }
    std::cout << max;
    return 0;
}