#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Problem: 217. Contains Duplicate
// Link: https://leetcode.com/problems/contains-duplicate

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> seen;
        for (int num : nums)
        {
            if (seen.count(num))
                return true;
            seen.insert(num);
        }
        return false;
    }
};

/* another solution

class Solution2
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> countMap;
        for (int num : nums)
        {
            countMap[num]++;
            if (countMap[num] > 1)
                return true;
        }
        return false;
    }
};
*/

void solve()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};
    cout << (sol.containsDuplicate(nums) ? "true" : "false") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}