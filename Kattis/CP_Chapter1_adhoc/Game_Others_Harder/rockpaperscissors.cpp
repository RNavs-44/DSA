#include <bits/stdc++.h>

bool won(std::string m1, std::string m2) {
    if (m1=="scissors" && m2 == "paper") return true;
    if (m1=="paper" && m2 == "rock") return true;
    if (m1=="rock" && m2 == "scissors") return true;
    return false;
}

int main () {
    int n, k;
    while (std::cin>>n && std::cin>>k) {
        int games = k * n * (n-1) / 2;
        std::vector <int> win(n+1, 0);
        std::vector <int> loss(n+1, 0);
        for (int i = 0; i < games; i++) {
            int p1, p2;
            std::string m1, m2;
            std::cin >> p1 >> m1 >> p2 >> m2;
            if (m1 != m2) {
                if (won(m1, m2)) {
                    win[p1] ++;
                    loss[p2] ++;
                }
                else {
                    win[p2] ++;
                    loss[p1] ++;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            if (win[i] == 0 && loss[i] == 0) {
                std::cout << "-" << std::endl;
            }
            else {
                std::cout.precision(3);
                std::cout << std::fixed;
                std::cout << double(win[i]) / (win[i] + loss[i]) << std::endl;
            }
        }
        std::cout << std::endl;
    }
}