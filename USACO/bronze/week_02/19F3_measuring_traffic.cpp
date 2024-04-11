#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n], b[n]; string t[n];

    for (int i = 0; i < n; i++) {
        cin >> t[i] >> a[i] >> b[i];
    }
    
    int l = -99999999, u = 99999999;
    // scanning backwards from mile N to mile 1
    // resulting range range of possible initial traffic clows
    for (int i = n-1; i >= 0; i--) {
        // if no ramp possible range narrowed down to that given by sensor
        if (t[i] == "none"){ l = max(l, a[i]); u = min(u, b[i]); }
        // if on ramp with range (a, b) new possible range (l - b, u - a)
        if (t[i] == "on"){ l -= min(b[i], l); u -= min(a[i], u); }
        // if off ramp with range(a, b) new possible range (l + a, u + b)
        if (t[i] == "off"){  l += a[i]; u += b[i]; }
    }
    // output range of possible initial traffic flows
    cout << l << " " << u << endl;

    // scan from mile 1 to N, resulting range range of final traffic flows
    l = -99999999, u = 99999999;
    for (int i = 0; i < n; i++) {
        // if no ramp possible range narrowed down to that given by sensor
        if (t[i] == "none"){ l = max(l, a[i]);  u = min(u, b[i]); }
        // if off ramp with range(a, b) new possible range (l + a, u + b)
        if (t[i] == "on"){ l += a[i]; u += b[i]; }
        // if on ramp with range (a, b) new possible range (l - b, u - a)
        if (t[i] == "off"){ l -= min(l, b[i]); u -= min(u, a[i]); }
        
    }
    cout << l << " " << u << endl;

    return 0;
}