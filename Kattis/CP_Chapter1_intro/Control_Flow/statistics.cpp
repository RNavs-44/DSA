#include <stdio.h>

int main() {
    int k;
    int c = 0;
    while (scanf("%d", &k) != EOF) {
        int v;
        int max = -1000000;
        int min = 1000000;
        while (k--) {
            scanf("%d", &v);
            if (v>max) max = v;
            if (v<min) min = v;
        }
        printf("Case %d: %d %d %d\n", ++c, min, max, max-min);
    }
    return 0;
}