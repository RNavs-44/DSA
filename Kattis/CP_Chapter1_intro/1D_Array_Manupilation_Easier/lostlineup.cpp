#include <stdio.h>
#include <bits/stdc++.h>
int main() {
    int n; scanf("%d\n", &n);
    if(n==1) {
        printf("1");
        return 0;
    }
    std::vector<int> line (n);
    line[0] = 1;
    for (int i = 0; i <= n-2; i++) {
        int x; scanf("%d", &x);
        line[1 + x] = i+2;
    }
    for (int person: line) {
        printf("%d ", person);
    }
    return 0;
}