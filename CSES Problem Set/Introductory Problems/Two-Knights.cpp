#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: Two Knights
// Link: [https://cses.fi/problemset/task/1072

void solve()
{
    ll k;
    cin >> k;

    for (ll n = 1; n <= k; n++)
    {
        ll tot = n * n * (n * n - 1) / 2;
        ll attack = 4 * (n - 1) * (n - 2);
        cout << tot - attack << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}