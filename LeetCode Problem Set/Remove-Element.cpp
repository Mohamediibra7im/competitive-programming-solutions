class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                v.push_back(nums[i]);
                count++;
            }
        }
        for(int i=0;i<count;i++)
        {
            v.push_back(val);
        }
        nums=v;
        return count;
    }
};