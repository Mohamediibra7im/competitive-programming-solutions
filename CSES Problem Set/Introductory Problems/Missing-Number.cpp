#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: Missing Number
// Link: https://cses.fi/problemset/task/1083

void solve() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &x : arr) {
        cin >> x;
    }

    ll totalSum = n * (n + 1) / 2;
    ll arrSum = accumulate(arr.begin(), arr.end(), 0LL);

    cout << totalSum - arrSum << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}