#include <stdio.h>

// X + nY = n, n - nY = X, n (1-Y) = X, n = X/(1-Y)
int main() {
    int X, Y; scanf("%d %d", &X, &Y);
    if (Y==1) X != 0 ? printf("IMPOSSIBLE") : printf("ALL GOOD");
    else printf("%.6f", X/(1.0-Y));
}