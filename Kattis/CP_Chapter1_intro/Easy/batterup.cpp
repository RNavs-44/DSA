#include <bits/stdc++.h>

int main() {
    int n; scanf("%d\n", &n);
    int count = 0;
    float slug = 0;
    while (n--) {
        float bat; scanf("%f", &bat);
        if (bat!=-1){
            count++;
            slug += bat;
        }
    }
    slug /= count;
    printf("%.5f\n", slug);
}