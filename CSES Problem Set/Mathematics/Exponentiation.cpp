#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: Exponentiation
// Link: https://cses.fi/problemset/task/1095

const int mod = 1e9 + 7;

ll powmod(ll x, ll y)
{
    ll res = 1;
    x %= mod;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % mod;
        x = (x * x) % mod;
        y >>= 1;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        cout << powmod(x, y) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}