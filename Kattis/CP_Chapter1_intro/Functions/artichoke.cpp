#include <bits/stdc++.h>

int p, a, b, c, d, n; 

double price(int k) {
    return p * (sin(a*k+b)+cos(c*k+d)+2);
}

int main () {
    double max = -1;
    double min = -1;
    double decline = 0;
    scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n);
    for (int i = 1; i <= n; i++) {
        double curr = price(i);
        if (curr > max) {
            max = curr;
            min = curr;
        }
        if (curr < min || min == -1) {
            min = curr;
        }
        if (max-min > decline) {
            decline = max-min;
        }
    }
    printf("%.8lf", decline);
    return 0;
}