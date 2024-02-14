#include <bits/stdc++.h>

void connect (std::vector<std::string>& v) {
    std::vector<std::pair<int, int>> locations (62);
    int size = 0;
    for (int y = 0; y < v.size(); y++) {
        for (int x = 0; x < v[y].size(); x++) {
            if (isdigit(v[y][x])) {
                size++;
                locations[v[y][x]-'0'] = {x, y};
            }
            else if (isalpha(v[y][x])) {
                size++;
                if (islower(v[y][x])) {
                    locations[v[y][x]-'a'+10] = {x, y};
                }
                else {
                    locations[v[y][x]-'A'+36] = {x, y};
                }
            }
        }
    }
    for (int i = 0; i < size-1; i++) {
        std::pair <int, int> dot1 = locations[i];
        std::pair <int, int> dot2 = locations[i+1];

        // vertical connection
        if (dot1.first == dot2.first) {
            int x = dot1.first, dot1y = dot1.second, dot2y = dot2.second;
            for (int y = std::min(dot1y, dot2y)+1; y < std::max(dot1y, dot2y); y++) {
                if (v[y][x] == '.') {
                    v[y][x] = '|';
                }
                else if (v[y][x] == '-') {
                    v[y][x] = '+';
                }
            }
        }
        
        // horizontal connection
        else {
            int y = dot1.second, dot1x = dot1.first, dot2x = dot2.first;
            for (int x = std::min(dot1x, dot2x)+1; x < std::max(dot1x, dot2x); x++) {
                if (v[y][x] == '.') {
                    v[y][x] = '-';
                }
                else if (v[y][x] == '|') {
                    v[y][x] = '+';
                }
            }
        }
    }
    // print array
    for (auto line : v) {
        std::cout << line << std::endl;
    }
}

int main () {
    std::vector <std::string> v;
    std::string line;
    while (std::getline(std::cin, line)) {
        if (line == "") {
            connect(v);
            v.clear();
            std::cout << std::endl;
        }
        else {
            v.push_back(line);
        }
    }
    connect(v);
}