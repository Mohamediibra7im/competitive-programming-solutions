class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        mpp[0] = 1;

        int sum = 0, count = 0;

        for (int i = 0; i < n; i++) {
            sum = (sum + nums[i]) % k;
            if (sum < 0) {
                sum = sum + k;
            }
            count += mpp[sum];
            mpp[sum]++;
        }
        return count;
    }
};