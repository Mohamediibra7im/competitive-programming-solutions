#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: Multiplication Table
// Link: https://cses.fi/problemset/task/2422

void solve()
{
    ll n;
    cin >> n;

    ll l = 1, r = n * n, ans = 1;
    while (l <= r)
    {
        ll k = (n * n + 1) / 2;
        ll mid = l + (r - l) / 2;
        ll cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cnt += min(n, mid / i);
        }

        if (cnt >= k)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
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