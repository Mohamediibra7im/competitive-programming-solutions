class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size(), pending = 0, ans = 0;
        vector<int> cnt(n + 1);

        for (int i = 0; i < n; ++i) {
            pending += cnt[i];
            int f = pending % 2;
            if (nums[i] == f) {
                if (i + k > n) return -1;

                cnt[i + k]--;
                pending++;
                ans++;
            }
        }

        return ans;
    }
};