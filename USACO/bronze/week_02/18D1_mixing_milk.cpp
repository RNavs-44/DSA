// https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/yxuk8S2r38bWhaZO3p0S/problems/yb4EakMY0iZXWm5uDFhI

#include <bits/stdc++.h>
using namespace std;

const int N = 3;
const int TURNS = 100;
int capacity[N], milk[N];

int main()
{
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    for (int i = 0; i < N; i++) 
    {
        cin >> capacity[i] >> milk[i];
    }
    for (int i = 0; i < TURNS; i++)
    {
        int bucket1 = i % N;
        int bucket2 = (i + 1) % N;
        int amount = min(milk[bucket1], capacity[bucket2] - milk[bucket2]);
        milk[bucket1] -= amount;
        milk[bucket2] += amount;
    }
    for (int m: milk)
    {
        cout << m << endl;
    }

    return 0;
}