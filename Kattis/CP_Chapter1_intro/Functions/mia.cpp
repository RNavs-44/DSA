#include <bits/stdc++.h>

int score(int x0, int x1) {
    if (x1 > x0) std::swap(x0, x1);
    if (x0==2 && x1==1) {
        return 1000;
    }
    else if (x0==x1) {
        return 100 * x0;
    }
    return 10*x0 + x1;
}
int main () {
    int s0, s1, r0, r1, score1, score2;
    while (scanf("%d %d %d %d", &s0, &s1, &r0, &r1), (s0||s1)) {
        score1 = score(s0, s1);
        score2 = score(r0, r1);
        if (score1>score2) printf("Player 1 wins.\n");
        else if (score2>score1) printf("Player 2 wins.\n");
        else printf("Tie.\n");
    }
}