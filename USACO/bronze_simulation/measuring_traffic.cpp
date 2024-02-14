#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    string t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> a[i] >> b[i];
    }
    // initial traffic flows
    // on [a, b] -> [a - 1, b - 1]
    int l = -99999999, u = 99999999;
    for (int i = n-1; i >= 0; i--)
    {
        if (t[i] == "none")
        {
            l = max(l, a[i]);
            u = min(u, b[i]);
        }
        else if (t[i] == "on")
        {
            l -= min(b[i], l);
            u -= min(a[i], u);
        }
        else if (t[i] == "off")
        {
            l += a[i];
            u += b[i];
        }
    }
    cout << l << " " << u << '\n';
    // final traffic flows
    l = -99999999, u = 99999999;
    for (int i = 0; i < n; i++)
    {
        if (t[i] == "none")
        {
            l = max(l, a[i]);
            u = min(u, b[i]);
        }
        else if (t[i] == "on")
        {
            l += a[i];
            u -= b[i];
        }
        else if (t[i] == "off")
        {
            l -= min(l, b[i]);
            u -= min(u, a[i]);
        }
    }
    cout << l << " " << u << '\n';
}