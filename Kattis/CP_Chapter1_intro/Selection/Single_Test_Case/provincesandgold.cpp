#include <stdio.h>

int main() {
    int g, s, c; scanf("%d %d %d", &g, &s, &c);
    int bp = 3*g + 2*s + c;
    if (bp >= 8) printf("Province or ");
    else if (bp >= 5) printf("Duchy or ");
    else if (bp >= 2) printf("Estate or ");
    if (bp >= 6) printf("Gold");
    else if (bp >= 3) printf("Silver");
    else printf("Copper");
    return 0;
}