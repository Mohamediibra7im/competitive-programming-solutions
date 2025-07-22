#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: Increasing Array
// Link: https://cses.fi/problemset/task/1094

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll total = 0, m = arr[0];

    for (ll i = 1; i < n; i++)
    {
        total += max(0LL, m - arr[i]);
        m = max(m, arr[i]);
    }
    cout << total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}