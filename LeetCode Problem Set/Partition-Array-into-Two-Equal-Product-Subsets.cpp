class Solution {
public:
    bool checkEqualPartitions(vector<int>& nums, long long target) {
        int n = nums.size();
        for (int mask = 1; mask < (1 << n) - 1; ++mask) {
            long long prod1 = 1;
            long long prod2 = 1;
            bool valid1 = true, valid2 = true;
            for (int i = 0; i < n; ++i) {
                if (mask & (1 << i)) {
                    if (prod1 > target || target % nums[i] != 0) {
                        valid1 = false;
                        break;
                    }
                    prod1 *= nums[i];
                }
            }
            if (!valid1 || prod1 != target)
                continue;
            for (int i = 0; i < n; ++i) {
                if (!(mask & (1 << i))) {
                    if (prod2 > target || target % nums[i] != 0) {
                        valid2 = false;
                        break;
                    }
                    prod2 *= nums[i];
                }
            }
            if (valid2 && prod2 == target)
                return true;
        }
        return false;
    }
};