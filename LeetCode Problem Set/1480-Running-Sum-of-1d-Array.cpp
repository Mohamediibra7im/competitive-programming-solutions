#include <bits/stdc++.h>
using namespace std;

// LeetCode 1480: Running Sum of 1d Array
// Link: https://leetcode.com/problems/running-sum-of-1d-array

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> prefix(nums.size(), 0);
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        return prefix;
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
    vector<int> res = sol.runningSum(nums);

    for (int x : res)
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