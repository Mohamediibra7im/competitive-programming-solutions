class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> answer(candies.size());
        int max_val = *std::max_element(candies.begin(), candies.end());

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= max_val) {
                answer[i] = true;
            } else {
                answer[i] = false;
            }
        }
        return answer;
    }
};