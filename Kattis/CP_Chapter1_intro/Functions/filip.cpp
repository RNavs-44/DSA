#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>

void reverseStr(std::string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        std::swap(str[i], str[n - i - 1]);
}

int main() {
    std::string a, b;
    std::cin >> a >> b;
    reverseStr(a);
    reverseStr(b);
    int ai = std::stoi(a);
    int bi = std::stoi(b);
    if (ai>bi) std::cout << ai;
    else std::cout << bi;
    return 0;
}