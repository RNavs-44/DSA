/*
Input: 2 numbers r1 and s, where s is mean of r2 and r2
Output: r2
*/

#include <stdio.h>

int main() {
    int r1, s;
    scanf("%d %d", &r1, &s);
    printf("%d", (s*2)-r1);
    return 0;
}

