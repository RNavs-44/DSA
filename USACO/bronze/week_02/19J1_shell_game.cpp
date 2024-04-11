// https://usaco.guide/groups/d7eYGfddXq3m2trXG2xt/post/yxuk8S2r38bWhaZO3p0S/problems/no4NPZGC4kF7m7pvecvn

#include <bits/stdc++.h>
using namespace std;

int N, A[100], B[100], G[100];

// return how many of E's guesses correct 
// given initial pebble position, pos
int num_correct(int pos) 
{
    int correct = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == pos) pos = B[i];
        else if (B[i] == pos) pos = A[i];
        if (pos == G[i]) correct++; 
    }
    return correct;
}

int main(void) 
{
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i] >> B[i] >> G[i];
    }
    int best = 0;
    for (int i = 1; i <= 3; i++)
    {
        best = max(best, num_correct(i));
    }
    cout << best << "\n";

    return 0;
}