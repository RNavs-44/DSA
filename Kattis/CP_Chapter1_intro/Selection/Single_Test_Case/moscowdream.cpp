/*
Requirements:
Consists of exactly n problems, has at least 1 easy, medium and hard problem

Input:
The input contains 4 integers a, b, c, n
a easy problems, b medium problems and c hard problems

Output
Print ‘YES’ if it is possible to create a problemset satisfying above requirements, and ‘NO’ otherwise.*/
#include <stdio.h>

int main() {
    int a, b, c, n; scanf("%d %d %d %d", &a, &b, &c, &n);
    if ((a>=1) && (b>=1) && (c>=1) && ((a+b+c) >= n)) {
        n >= 3 ? printf("YES\n") : printf("NO\n");
    }
    else printf("NO\n");
    return 0;
}