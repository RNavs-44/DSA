#include <bits/stdc++.h>

std::vector<std::pair<int, int>> getMoves (int x, int y) {
    std::vector<std::pair<int, int>> moves;
    for (int n = 0; n<=8; n++) {
        if (x+n<=8 && y+n<=8) moves.push_back({x+n, y+n});
        if (x+n<=8 && y-n>=1) moves.push_back({x+n, y-n});
        if (x-n>=1 && y+n<=8) moves.push_back({x-n, y+n});
        if (x-n>=1 && y-n>=1) moves.push_back({x-n, y-n});
    }
    return moves;
}

int main () {
    int T; scanf("%d", &T);
    while (T--) {
        char c1, c2;
        int x[2]; int y[2]; 
        std::cin >> c1 >> x[1] >> c2 >> y[1];
        x[0] = c1-'A'+1; y[0] = c2-'A'+1;
        if (x[0]==y[0] && x[1]==y[1]) {
            std::cout << 0 << " " << c1 << " " << x[1] << std::endl;
        }
        else if ((x[0]+y[0])%2 != (x[1]+y[1])%2) {
            std::cout << "Impossible" << std::endl;
        }
        // else if (abs(y[0]-x[0]) == abs(y[1]-x[1])) {
        //     std::cout << 1 << " " << c1 << " " << x[1] << " " << c2 << " " << y[1] << std::endl;
        // }
        else {
            std::vector<std::pair<int, int>> moves1 = getMoves(x[0], x[1]);
            std::pair<int, int> final = {y[0], y[1]};
            if (std::find(moves1.begin(), moves1.end(), final) != moves1.end()) {
                std::cout << 1 << " " << c1 << " " << x[1] << " " << c2 << " " << y[1] << std::endl;
            }
            else {
                std::vector<std::pair<int, int>> moves2 = getMoves(y[0], y[1]);
                for (std::pair<int, int> move: moves1) {
                    if (std::find(moves2.begin(), moves2.end(), move) != moves2.end()) {
                        char c3 = move.first+'A'-1;
                        std::cout << 2 << " " << c1 << " " << x[1] << " " << c3 << " " << move.second << " " << c2 << " " << y[1] << std::endl;
                        break;
                    }
                }
            }

        }
    }
}