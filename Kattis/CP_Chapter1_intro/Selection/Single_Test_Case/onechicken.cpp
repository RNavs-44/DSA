/*
Input:
The first line contain integers N, M 
the number of people at the buffet and the number of pieces of chicken Dr. Chaz is providing.

Output:
Output a single line of the form “Dr. Chaz will have [P]piece[s] of chicken left over!”, 
if Dr. Chaz has enough chicken and P pieces of chicken will be left over, 
or “Dr. Chaz needs [Q] more piece[s] of chicken!” if Dr. Chaz does not have enough 
pieces of chicken and needs Q more.
*/
#include <stdio.h>

int main() {
    int n, m; scanf("%d %d", &n, &m);
    if (n <= m) {
        if (m-n != 1) printf("Dr. Chaz will have %d pieces of chicken left over!", m-n);
        else printf("Dr. Chaz will have 1 piece of chicken left over!");
    }
    else {
        if (n-m != 1) printf("Dr. Chaz needs %d more pieces of chicken!", n-m);
        else printf("Dr. Chaz needs 1 more piece of chicken!");
    }
    return 0;
}