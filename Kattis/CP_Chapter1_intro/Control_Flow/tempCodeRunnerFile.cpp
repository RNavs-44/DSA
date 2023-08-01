#include <stdio.h>

int main() {
    int n; scanf("%d\n", &n);
    while (n--) {
        int g = 0, v = 0, prev = 0; scanf("%d", &g);
        scanf("%d", &prev);
        for (int i = 2; i <= g; i++) {
            scanf("%d", &v);
            if (v != ++prev) {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}