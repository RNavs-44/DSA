#include <bits/stdc++.h>

int main () {
    int n, t; scanf("%d %d", &n, &t);
    int A[n];
    long long sum = 0; long long esum = 0;
    for (int i = 0; i < n; i++) {
        int val; scanf("%d", &val);
        A[i] = val;
        sum += val;
        if (val%2 == 0) esum += val;
    }
    switch(t) {
        case 1:
            printf("7");
            break;
        case 2:
            if (A[0] > A[1]) printf("Bigger");
            else if(A[0] == A[1]) printf("Equal");
            else printf("Smaller");
            break;
        case 3:
            std::sort(A, A+3);
            printf("%d", A[1]);
            break;
        case 4: 
            printf("%lld", sum);
            break;
        case 5:
            printf("%lld", esum);
            break;
        case 6:
            for (int i = 0; i < n; i++) {
                A[i] %= 26;
                printf("%c", 'a' + A[i]);
            }
            break;
        case 7:
            std::vector<bool> visited (n, false);
            int i = 0;
            while (true) {
                if (i >= n) {
                    printf("Out");
                    return 0;
                }
                else if (i == n-1) {
                    printf("Done");
                    return 0;
                }
                else if(visited[i]) {
                    printf("Cyclic");
                    return 0;
                }
                visited[i] = true;
                i = A[i];
            }
            break;
    }
}