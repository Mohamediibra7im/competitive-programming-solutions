#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: Subarray Sums II
// Link: https://cses.fi/problemset/task/1661

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll ans = 0, sum = 0;
    map<ll, ll> freq;
    freq[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        ll a;
        cin >> a;
        sum += a;
        ll left = sum - x;
        ans += freq[left];
        freq[sum]++;
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}