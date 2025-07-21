#include <bits/stdc++.h>
using namespace std;
#define ll long long

// LeetCode Problem Set: 66. Plus One
// Problem Link: https://leetcode.com/problems/plus-one

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

void solve() {
    vector<int> digits = {9, 9, 9};
    Solution sol;
    vector<int> result = sol.plusOne(digits);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}