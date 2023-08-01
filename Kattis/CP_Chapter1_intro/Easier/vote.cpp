#include <bits/stdc++.h>

int main() {
    int T; scanf("%d", &T);
    while (T--) {
        int n; scanf("%d", &n);
        std::vector<int> votes;
        for (int i = 0; i < n; i++) {
            int val; scanf("%d", &val);
            votes.push_back(val);
        }
        int max = -1, winner = 0, total = 0;
        for (int i = 0; i < n; i++) {
            total += votes[i];
            if(votes[i] > max){
                max = votes[i];
                winner = i+1;
            } 
            else if(votes[i] == max) winner = -1;
        }
        if (winner == -1) printf("no winner\n");
        else if (max > total / 2) printf("majority winner %d\n", winner);
        else printf("minority winner %d\n", winner);
    }
    return 0;
}