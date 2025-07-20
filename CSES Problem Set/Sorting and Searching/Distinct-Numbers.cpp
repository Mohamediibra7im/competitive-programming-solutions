#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: Distinct Numbers
// Link: https://cses.fi/problemset/task/1621

void solve() {
    int n, ele;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        s.insert(ele);
    }
    cout << s.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}