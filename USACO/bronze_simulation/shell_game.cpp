#include <bits/stdc++.h>
using namespace std;

int N, A[100], B[100], G[100];


int num_correct(int pos) 
{
    int correct = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == pos) pos = B[i];
        else if (B[i] == pos) pos = A[i];
        if (pos == G[i]) return correct; 
    }
}

int main(void) 
{
    ifstream fin("shell.in");
    fin >> N;
    for (int i = 0; i < N; i++)
    {
        fin >> A[i] >> B[i] >> G[i];
    }
    int best = 0;
    for (int i = 1; i <= 3; i++)
    {
        best = max(best, num_correct(i));
    }
	ofstream fout("shell.out");
    fout << best << "\n";
    return 0;
}