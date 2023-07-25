#include <stdio.h>

int main() {
    int X; scanf("%d", &X);
    int N; scanf("%d", &N);
    int total = 0;
    for (int i = 0; i < N; i++) {
        int p; scanf("%d", &p);
        total += p;
    }
    printf("%d", (X*(N+1) - total));
    return 0;
}