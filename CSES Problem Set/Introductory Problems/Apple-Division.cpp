#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e15;

// Problem: Apple Division
// Link: https://cses.fi/problemset/task/1623

int N, p[20];
ll a, b, best;

void solve()
{
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> p[i];

    best = MOD;
    for (int i = 0; i < (1 << N); i++)
    {
        a = 0, b = 0;
        for (int j = 0; j < N; j++)
        {
            if (i & (1 << j))
                a += p[j];
            else
                b += p[j];
        }
        best = min(best, abs(a - b));
    }
    cout << best << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}