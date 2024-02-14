#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s[n], t[n], b[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i] >> t[i] >> b[i];
    }
    int max_buckets = 0;
    for (int i = 1; i <= 1000; i++)
    {
        int cur_buckets = 0;
        for (int j = 1; j <= n; j++)
        {
            if (t[j] >= i && s[j] <= i)
            {
                cur_buckets += b[i];
            }
        }
        max_buckets = max(max_buckets, cur_buckets);
    }
    cout << max_buckets << '\n';
}