class Solution {
public:
    bool canAliceWin(std::vector<int>& nums) {
        int sumAliceSingle = 0;
        int sumAliceDouble = 0;
        int sumBobSingle = 0;
        int sumBobDouble = 0;

        for (int num : nums) {
            if (num < 10) {
                sumAliceSingle += num;
            } else if (num < 100) {
                sumAliceDouble += num;
            }
        }

        sumBobSingle =
            std::accumulate(nums.begin(), nums.end(), 0) - sumAliceSingle;
        sumBobDouble =
            std::accumulate(nums.begin(), nums.end(), 0) - sumAliceDouble;

        return sumAliceSingle > sumBobSingle || sumAliceDouble > sumBobDouble;
    }
};