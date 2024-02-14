#include <bits/stdc++.h>

int main () {
    std::string s;
    std::vector<std::pair<int, char>> wk, wq, wr, wb, wn, wp, bk, bq, br, bb, bn, bp;
    getline(std::cin, s);
    for (int r = 8; r >= 1; r--) {
        getline(std::cin, s);
        for (int c = 0; c <= 8; c++) {
            switch(s[c*4+2]) {
                case 'k':
                    bk.push_back({r, char('a'+c)});
                    break;
                case 'K':
                    wk.push_back({r, char('a'+c)});
                    break;
                case 'q':
                    bq.push_back({r, char('a'+c)});
                    break;
                case 'Q':
                    wq.push_back({r, char('a'+c)});
                    break;
                case 'r':
                    br.push_back({r, char('a'+c)});
                    break;
                case 'R':
                    wr.push_back({r, char('a'+c)});
                    break;
                case 'b':
                    bb.push_back({r, char('a'+c)});
                    break;
                case 'B':
                    wb.push_back({r, char('a'+c)});
                    break;
                case 'n':
                    bn.push_back({r, char('a'+c)});
                    break;
                case 'N':
                    wn.push_back({r, char('a'+c)});
                    break;
                case 'p':
                    bp.push_back({r, char('a'+c)});
                    break;
                case 'P':
                    wp.push_back({r, char('a'+c)});
                    break;
            }
        }
        getline(std::cin, s);
    }
    std::vector <std::string> white, black;
    

    for (auto x: wk) white.push_back("K" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: wq) white.push_back("Q" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: wr) white.push_back("R" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: wb) white.push_back("B" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: wn) white.push_back("N" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: wp) white.push_back(std::string(1, x.second) + std::to_string(x.first));

    for (auto x: bk) black.push_back("K" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: bq) black.push_back("Q" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: br) black.push_back("R" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: bb) black.push_back("B" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: bn) black.push_back("N" + std::string(1, x.second) + std::to_string(x.first));
    for (auto x: bp) black.push_back(std::string(1, x.second) + std::to_string(x.first));

    std::cout << "White: ";
    if (white.size() >= 1) {
        std::cout << white[0];
        for (int i = 1; i < white.size(); i++) std::cout << ", " << white[i];
    }

    std::cout << "\nBlack: ";
    if (black.size() >= 1) {
        std::cout << black[0];
        for (int i = 1; i < black.size(); i++) std::cout << "," << black[i];
    }
    return 0;
}