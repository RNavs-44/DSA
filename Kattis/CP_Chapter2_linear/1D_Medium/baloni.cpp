#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    scanf("%d %d", &n, &m);
    vector<vector<char>> dance(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c; scanf("%c", &c);
            dance[i][j] = c;
        }
    }
    int cnt = 1;
    for (int j = 0; j < m; j++)
    {
        bool blank = true;
        for (int i = 0; i < n; i++)
        {
            if (dance[i][j] == '$')
            {
                blank = false;
                break;
            }
        }
        if (blank) cnt += 1;
    }
    printf("%d\n", cnt);
}