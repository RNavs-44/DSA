#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s; scanf("%d %d", &n, &s);
    s -= 1; // zero indexing
    int k = 1, cnt = 0; // power of jump, number of broken targets
    vector<int> q(n, 0);
    vector<int> v(n, 0);
    vector<bool> broken(n, false);
    int tries = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &q[i], &v[i]);
    }
    while (s >= 0 && s < n && tries <= 99999999)
    {
        if (q[s] == 0)
        {
            if (k >= 0) k += v[s];
            else k -= v[s];
            k *= -1;
        }
        else if (q[s] == 1)
        {
            if (abs(k) >= v[s] && !broken[s])
            {
                broken[s] = true;
                cnt ++;
            }
        }
        s += k;
        tries++;
        // printf("s: %d k: %d\n", s, k);
    }

    printf("%d\n", cnt);
}

// 1 3 -2 -7 5

// 1 3 -2 -1 0
// 1 3 5 7 9
// 1 2 3 4 5
// -1 -2

// -1 3 5