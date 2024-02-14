/*
Input:
The first line of input contains a single integer which is the number of periods during the person’s lifetime.
The next lines describe the periods of life. Each of these lines contains two real numbers the quality of life in this period, 
and the number of years in this period. All real numbers will be specified to exactly one decimal place.

Output:
Display the QALY accumulated by the person. 
*/
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