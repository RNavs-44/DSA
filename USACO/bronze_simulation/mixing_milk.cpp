#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

const int N = 3;
const int TURNS = 100;

int main()
{
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    vector<int> capacity(N);
    vector<int> milk(N);
    for (int i = 0; i < N; i++) 
    {
        scanf("%d %d", &capacity[i], &milk[i]);
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
        printf("%d\n", m);
    }
}