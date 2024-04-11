// https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/ZkhTvlw0KgyHrqQ69LD1/problems/iHaZTUqAEQqz7LzrAojM

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k; cin >> n >> k;

    // store number of characters on current line
    int curr = 0;

    for (int i = 0; i < n; i++) {
        string S;
        cin >> S; // read in next word
        curr += S.length(); // calculate new length of line with word
        if (curr <= k) {
            // if not first word print space char
            if (i) cout << " "; 
            cout << S; // constraint satisfied, print word
        }
        else {
            // or create new line and print on that line
            cout << endl << S;
            curr = S.length();
        }
    }

    return 0;
}