class Solution {
      public:
        vector<int> findErrorNums(const vector<int> &nums) {
            vector<bool> found(nums.size() + 1, false);
            found[0] = true;
            int duplicate_number = -1;
            for (int num : nums) {
                if (found[num]) {
                    duplicate_number = num;
                    continue;
                }
                found[num] = true;
            }
            int missing_number = static_cast<int>(
                distance(found.cbegin(),
                              find(found.cbegin(), found.cend(), false)));
            return vector<int>{duplicate_number, missing_number};
        }
    };