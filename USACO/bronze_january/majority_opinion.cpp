#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; scanf("%d", &t);
    while (t--)
    {
        int n; scanf("%d", &n);
        vector<int> hay(n, 0);
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &hay[i]);
        }
        // for (int x = 1; x <= n; x++)
        // {
        //     for (int i = 0; i < n-2; i++)
        //     {
        //         int cnt = 0;
        //         for (int j = i; j < i + 3; j++)
        //         {
        //             if (hay[j] == x) cnt++;
        //         }
        //         if (cnt >= 2)
        //         {
        //             ans.push_back(x);
        //             break;
        //         }
        //     }
            
        // }
        if (n == 2)
        {
            if (hay[0] == hay[1]) ans.push_back(hay[0]);
        }
        else
        {
            for (int j = 0; j < n - 2; j++)
            {
                if(hay[j] == hay[j+1] || hay[j] == hay[j+2])
                {
                    if (find(ans.begin(), ans.end(), hay[j]) == ans.end()) ans.push_back(hay[j]);
                }
                else if (hay[j+1] == hay[j+2])
                {
                    if (find(ans.begin(), ans.end(), hay[j+1]) == ans.end()) ans.push_back(hay[j+1]);
                }
            }
        }
        sort(ans.begin(), ans.end());
        if (ans.empty())
        { 
            printf("-1");
        }
        else
        {
            for (int i = 0; i < ans.size(); i++) {
                printf("%d", ans[i]);
                if (i != ans.size() - 1) {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}