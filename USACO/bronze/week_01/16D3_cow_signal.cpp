// https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/ZkhTvlw0KgyHrqQ69LD1/problems/oakS6qPnEb0Jes5HquYu

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int M, N, K;
    cin >> M >> N >> K;

    for (int i = 0; i < M; i++) {
        string line, output_line;
        cin >> line;
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < K; k++) {
                output_line += line[j];
            }
        }
        for (int k = 0; k < K; k++) {
            cout << output_line << endl;
        }
    }

    return 0;
}