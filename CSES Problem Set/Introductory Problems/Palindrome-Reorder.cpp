#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: Palindrome Reorder
// Link: https://cses.fi/problemset/task/1755

void solve() {
    string str;
    cin >> str;

    map<char, int> freq;
    for (char c : str)
        freq[c]++;

    int odd_count = 0;
    char odd_char = 0;
    for (auto &[ch, cnt] : freq)
    {
        if (cnt % 2)
        {
            odd_count++;
            odd_char = ch;
        }
    }

    if (odd_count > 1)
    {
        cout << "NO SOLUTION\n";
        return;
    }

    string half = "";
    for (auto &[ch, cnt] : freq)
    {
        half += string(cnt / 2, ch);
    }

    string palindrome = half;
    if (odd_count == 1)
        palindrome += string(freq[odd_char] % 2, odd_char);
    reverse(half.begin(), half.end());
    palindrome += half;

    cout << palindrome << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}