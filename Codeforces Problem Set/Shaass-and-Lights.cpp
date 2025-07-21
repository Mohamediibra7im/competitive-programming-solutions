#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(), x.end()


// Problem: Shaass and Lights
// Link: https://codeforces.com/contest/294/problem/C

const int M = 1e3 + 5;
const ll MOD = 1'000'000'007;
ll fact[M], invfact[M];

ll fastPow(ll x, ll y, ll mod)
{
    ll res = 1;
    x %= mod;
    while (y)
    {
        if (y & 1)
            res = res * x % mod;
        x = x * x % mod;
        y >>= 1;
    }
    return res;
}

ll invMod(ll x, ll mod)
{
    return fastPow(x, mod - 2, mod);
}

void factorial(int mod)
{
    fact[0] = 1;
    for (int i = 1; i < M; i++)
        fact[i] = fact[i - 1] * i % mod;
    for (int i = 0; i < M; i++)
        invfact[i] = invMod(fact[i], mod);
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for (auto &i : arr)
        cin >> i;
    sort(all(arr));

    ll zeros = n - m, ans = fact[zeros];
    for (int i = 1; i < m; i++)
    {
        int zerosBetween = arr[i] - arr[i - 1] - 1;
        if (zerosBetween > 0)
        {
            ans = ans * fastPow(2, zerosBetween - 1, MOD) % MOD;
            ans = ans * invfact[zerosBetween] % MOD;
        }
    }
    ans = ans * invfact[arr[0] - 1] % MOD;
    ans = ans * invfact[n - arr[m - 1]] % MOD;
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    factorial(MOD);
    solve();

    return 0;
}