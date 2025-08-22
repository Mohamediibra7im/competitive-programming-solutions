class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if (n < 5) {
            return 0;
        }
        int ans = nums[n - 1] - nums[0];
        for (int i = 0; i <= 3; i++) {
            ans = min(ans, nums[n - (3 - i) - 1] - nums[i]);
        }
        return ans;
    }
};