#include <bits/stdc++.h>
using namespace std;
#define ll long long

// LeetCode 1929: Concatenation of Array
// Link: https://leetcode.com/problems/concatenation-of-array

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> res(2 * n);
        for (int i = 0; i < n; i++)
        {
            res[i] = nums[i];
            res[i + n] = nums[i];
        }
        return res;
    }
};

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    Solution sol;
    vector<int> ans = sol.getConcatenation(nums);

    for (int x : ans)
        cout << x << ' ';
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}