class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int maxD = 0;
        int minElement = arrays[0][0];
        int maxElement = arrays[0].back();
        for(int i = 1; i < arrays.size(); i++)
        {
            auto& currArray = arrays[i];
            int disMin = abs(currArray[0] - maxElement);
            int disMax = abs(currArray.back() - minElement);
            maxD = max({maxD, disMin, disMax});
            minElement = min(minElement, currArray[0]);
            maxElement = max(maxElement, currArray.back());
        }
        return maxD;
    }
};