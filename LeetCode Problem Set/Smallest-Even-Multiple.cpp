class Solution {
public:
    int smallestEvenMultiple(int n) {
        int multiple = 2;
        while (true) {
            if (multiple % n == 0) {
                return multiple;
            }
            multiple += 2;
        }
    }
};