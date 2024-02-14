#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int M, N;
    cin >> M >> N;

    int limit[100], bessie[100];
    int length, speed, pos = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> length >> speed;
        for (int j = pos; j < pos + length; j++)
        {
            limit[i] = speed;
        }
    }
    pos = 0;
    for (int i = 0; i < M; i++)
    {
        cin >> length >> speed;
        for (int j = pos; j < pos + length; j++)
        {
            bessie[i] = speed;
        }
    }
    int max_over = 0;
    for (int i = 0; i < 100; i++)
    {
        max_over = max(bessie[i] - limit[i], max_over);
    }
    cout << max_over << '\n';
    return 0;
}