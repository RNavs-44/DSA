/*
Input:
The first line of input contains the integer X
The second line of input contains the integer N
Each of the following N lines contains an integer, 
the number of megabytes spent in each of the first months of using the plan. Numbers 
will be such that Pero will never use more megabytes than he actually has.

Output:
The first and only line of output must contain the required value from the task.
*/
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