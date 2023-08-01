#include <stdio.h>

int main() {
    int n; scanf("%d\n", &n);
    while (n--) {
        int g, v, prev, ans=0; scanf("%d", &g);
        scanf("%d", &prev);
        for (int i = 2; i <= g; i++) {
            scanf("%d", &v);
            if (++prev != v && ans == 0) {
                ans = i;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
