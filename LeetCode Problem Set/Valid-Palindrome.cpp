#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: 125. Valid Palindrome
// Link: https://leetcode.com/problems/valid-palindrome

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string filtered;
        for (char c : s)
        {
            if (isalnum(c))
            {
                filtered += tolower(c);
            }
        }
        string reversed = filtered;
        reverse(reversed.begin(), reversed.end());
        return filtered == reversed;
    }
};

void solve()
{
    Solution sol;
    string s = "A man, a plan, a canal: Panama";
    cout << (sol.isPalindrome(s) ? "true" : "false") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}