#include <bits/stdc++.h>
int main() {
    std::vector<int> letters (26);
    int m; std::cin >> m;
    int total = 0;
    int correct = 0;
    while (m != -1) {
        char letter; std::cin >> letter;
        int idx = letter - 'A';
        std::string status; std::cin >> status;
        if (status == "right") {
            correct++;
            total +=  m + (20 * letters[idx]);
        }
        else letters[idx] ++;
        std::cin >> m;
    }
    std::cout << correct << " " << total;
}