/*
Input:
Input consists of a single integer N

Output:
Output the entire wizard’s spell by counting from 1 to N, 
giving one number and “Abracadabra” per line.
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        printf("%d Abracadabra\n", i);
    }
    return 0;
}