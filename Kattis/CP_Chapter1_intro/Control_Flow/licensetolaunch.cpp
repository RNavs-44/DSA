#include <stdio.h>
#include <climits>

int main() {
    int n, v; scanf("%d\n", &n);
    int min = INT_MAX;
    int min_idx = -1;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &v);
        if (v < min) {
            min = v;
            min_idx = i;
        }
    }
    printf("%d", min_idx);
}