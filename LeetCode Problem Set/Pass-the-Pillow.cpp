class Solution {
public:
    int passThePillow(int n, int time) {
        int position = time % (2 * n - 2);
        if (position < n) {
            return position + 1;
        }
        return 2 * n - position - 1;
    }
};