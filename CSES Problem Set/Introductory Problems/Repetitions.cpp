#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: Repetitions
// Link: https://cses.fi/problemset/task/1069

void solve()
{
    string str;
    cin >> str;
    int maxLen = 1, curLen = 1;
    for (size_t i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1])
        {
            curLen++;
        }
        else
        {
            maxLen = max(maxLen, curLen);
            curLen = 1;
        }
    }
    maxLen = max(maxLen, curLen);
    cout << maxLen << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}