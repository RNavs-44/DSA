#include <bits/stdc++.h>

int main() {
    std::vector<int> seq (3);
    std::cin >> seq[0] >> seq[1] >> seq[2];
    sort(seq.begin(), seq.end());
    int a = seq[1] - seq[0];
    int b = seq[2] - seq[1];
    if (a == b) std::cout << seq[2] + a;
    else if (2*a == b) std::cout << seq[2] - a;
    else std::cout << seq[0] + b; 
    return 0;
}