class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int v5 = 0, v10 = 0;

        for (int bill : bills) {
            if (bill == 5) {
                v5++;
            } else if (bill == 10) {
                if (v5 == 0)
                    return false;
                v5--;
                v10++;
            } else if (bill == 20) {
                if (v10 > 0 && v5 > 0) {
                    v10--;
                    v5--;
                } else if (v5 >= 3) {
                    v5 -= 3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};