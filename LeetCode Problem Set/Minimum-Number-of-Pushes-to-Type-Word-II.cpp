class Solution {
public:
    int minimumPushes(string word) {
        vector<int> letterCount(26);
        for (auto c : word)
        {
            letterCount[c - 'a']++;
        }
        sort(letterCount.begin(), letterCount.end(), greater<int>());
        int ans = 0;
        int pushCount = 1;
        for (int i = 0; i < letterCount.size(); i++)
        {
            ans += letterCount[i] * pushCount;
            if ((i + 1) % 8 == 0)
            {
                pushCount++;
            }
        }
        return ans;
        
    }
};