#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: Food Division
// Link: https://cses.fi/problemset/task/1189

const int maxN = 2e5 + 1;
int N, A[maxN];

void solve()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
        cin >> A[i];
    for (int i = 1, b; i <= N; i++)
    {
        cin >> b;
        A[i] += (A[i - 1] - b);
    }
    sort(A + 1, A + N + 1);

    ll ans = 0;
    for (int i = 1; i <= N; i++)
        ans += abs(A[i] - A[(N + 1) / 2]);

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}