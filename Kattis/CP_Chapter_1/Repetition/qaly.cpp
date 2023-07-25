#include <stdio.h>

int main() {
    int N;
    float total;
    scanf("%d", &N);
    while (N--) {
        float a, b; scanf("%f %f", &a, &b);
        total += (a*b);
    }
    printf("%f", total);
    return 0;
}