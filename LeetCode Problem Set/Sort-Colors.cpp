class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lp = 0, mp = 0, hp = nums.size() - 1;

        while (mp <= hp) {
            if (nums[mp] == 0) {
                swap(nums[lp], nums[mp]);
                lp++;
                mp++;
            } else if (nums[mp] == 1) {
                mp++;
            } else {
                swap(nums[mp], nums[hp]);
                hp--;
            }
        }
    }
};