#include <bits/stdc++.h>

int main () {
    std::string s;
    std::cin >> s;

    int rank_to_star[25] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2};

    bool legend = false;
    int rank = 25;
    int stars = 0;
    int winstreak = 0;

    for(auto i : s) {
        if(i=='W') {
            winstreak ++;
            // if player rank 6-25 and on winstreak, gain star
            if (rank >= 6 && winstreak >= 3) {
                stars ++;
                if (rank_to_star[rank-1]+1 == stars) {
                    rank --;
                    stars = 1;
                }
            }
            // if player wins game they gain star
            stars ++;
            // if player has all stars for rank, will gain 1 rank
            if (rank_to_star[rank-1]+1 == stars) {
                rank --;
                stars = 1;
            }
            if (rank == 0) legend = true;
        } 
        else {
            winstreak = 0;
            // if player ranks 1-20 they lose star
            if (rank <= 20) {
                stars --;
            }
            // if player on 0 stars on rank and loses star, they drop rank
            if (stars == -1) {
                if (rank == 20) {
                    stars = 0;
                }
                else {
                    rank ++;
                    stars = rank_to_star[rank-1]-1;
                }
            }
        }
    }
    if (legend) {
        std::cout << "Legend" << std::endl;
    }
    else {
        std::cout << rank << std::endl;
    }
}