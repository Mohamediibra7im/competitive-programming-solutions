class Solution {
public:
    int minSwaps(vector<int>& nums) {
    int n = nums.size();
    int cnt_1 = count(nums.begin(), nums.end(), 1);

    if (cnt_1 == 0) {
        return 0;
    }

    vector<int> nums_extended(nums.begin(), nums.end());
    nums_extended.insert(nums_extended.end(), nums.begin(), nums.end());

    int min_swaps = INT_MAX;
    int cnt_0 = 0;

    for (int i = 0; i < cnt_1; ++i) {
        if (nums_extended[i] == 0) {
            cnt_0++;
        }
    }
    min_swaps = cnt_0;

    for (int i = 1; i < n; ++i) {
        if (nums_extended[i - 1] == 0) {
            cnt_0--;
        }
        if (nums_extended[i + cnt_1 - 1] == 0) {
            cnt_0++;
        }
        min_swaps = min(min_swaps, cnt_0);
    }

    return min_swaps;
    }
};