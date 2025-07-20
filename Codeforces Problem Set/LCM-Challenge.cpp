#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: LCM Challenge
// Link: https://codeforces.com/problemset/problem/235/A

ll LCM(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}

void solve()
{
    ll n;
    cin >> n;

    if (n <= 2)
    {
        cout << n << endl;
        return;
    }
    if (n == 3)
    {
        cout << 6 << endl;
        return;
    }

    ll ans = 0;
    for (ll i = n; i >= max(1LL, n - 50); i--)
    {
        for (ll j = n; j >= max(1LL, n - 50); j--)
        {
            for (ll k = n; k >= max(1LL, n - 50); k--)
            {
                if (i != j && j != k && i != k)
                    ans = max(ans, LCM(i, LCM(j, k)));
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}