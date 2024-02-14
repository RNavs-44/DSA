#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n; 
    scanf("%lld", &n);
    // 7 3  5  1  6  2  14 10
    // 7 10 15 16 22 24 38 48
    // 0 3  1  2  1  3  3  6
    vector<ll> cows(n);
    vector<ll> prefix(n+1);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &cows[i]);
        prefix[i+1] = (prefix[i] + cows[i]) % 7;
    }
    vector<int> last_found(7, -1);
    int maximum = 0;
    for (int i = 0; i < prefix.size(); i++)
    {
        if(last_found[prefix[i]] == -1)
        {
            last_found[prefix[i]] = i;
        }
        else
        {
            maximum = max(maximum, i - last_found[prefix[i]]);
        }
    }
    printf("%d\n", maximum);
}