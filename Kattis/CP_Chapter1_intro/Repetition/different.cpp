/*
Input:
Each line of the input consists of a pair of integers. The input is terminated by end of file.

Output:
For each pair of integers in the input, output one line, containing the absolute value of their difference
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    long long a, b;
    while (scanf("%lld %lld", &a, &b) != EOF) {
        printf("%lld\n", abs(a-b));
    }
    return 0;
}