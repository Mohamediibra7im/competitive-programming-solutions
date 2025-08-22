class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int a = numBottles;
        int b = numExchange;
        int get = a / b;
        int have = get + a % b;
        int ans = a + get;
        while (have >= b) {
            get = have / b;
            have = get + have % b;
            ans += get;
        }
        return ans;
    }
};