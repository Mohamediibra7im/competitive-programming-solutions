class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> prefixSum;
        prefixSum.push_back(0);
        for (int i = 0; i < n; ++i) {
            prefixSum.push_back(prefixSum.back() + nums[i]);
        }
        vector<int> allSums;
        for (int i = 1; i <= n; ++i) {
            for (int j = i; j <= n; ++j) {
                allSums.push_back(prefixSum[j] - prefixSum[i - 1]);
            }
        }
        sort(allSums.begin(), allSums.end());
        int ans = 0;
        for (int i = left - 1; i < right; ++i) {
            ans = (ans + allSums[i]) % 1000000007;
        }
        return ans;
    }
};