class Solution
{
public:
    int smallestDistancePair(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end()); // Step 1

        int n = nums.size();
        int left = 0;                      // Step 2: Initialize left to 0
        int right = nums[n - 1] - nums[0]; // Initialize right to the maximum possible distance

        while (left < right) // Step 3
        {
            int middle = left + (right - left) / 2;
            int count = 0;

            for (int i = 0; i < n; i++)
            {
                count += upper_bound(nums.begin() + i, nums.end(), nums[i] + middle) - (nums.begin() + i + 1);
            }

            if (count < k)
            {
                left = middle + 1;
            }
            else
            {
                right = middle;
            }
        }

        return left; // Step 4
    }
};