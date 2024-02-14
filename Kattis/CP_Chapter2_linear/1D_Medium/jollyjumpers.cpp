#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    while (scanf("%d", &k) != EOF)
    {
        int arr[k];
        for (int i = 0; i < k; i++) scanf("%d", &arr[i]);
        
        bool flags[k];
        bool jolly = true;
        for (int i = 0; i < k; i++) 
        { 
            flags[i] = false;
        }

        for (int i = 1; i < k; i++)
        {
            int idx = abs(arr[i] - arr[i-1]);
            if (idx >= 0 && idx < k) 
            {
                flags[idx] = true;
            }
        }

        for (int i = 1; i < k; i++) if (!flags[i]) jolly = false;
        if (jolly) printf("Jolly\n");
        else printf("Not jolly\n");
    }
}