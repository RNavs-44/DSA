#include <bits/stdc++.h>
int main() {
    int N; std::cin >> N;
    std::vector<std::string> names (N);
    while (N--) {
        std::string name; std::cin >> name;
        names.push_back(name);
    }
    std::vector<std::string> temp = names;
    std::sort(names.begin(), names.end());
    if (names == temp) {
        std::cout << "INCREASING";
    }
    else {
        std::reverse(names.begin(), names.end());
        if (names == temp) std::cout << "DECREASING";
        else std::cout << "NEITHER";
    }
    return 0;
}