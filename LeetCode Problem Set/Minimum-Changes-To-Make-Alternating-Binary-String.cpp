class Solution {
public:
    int minOperations(string s) {
        int a = 0, b = 0;
        char x, y;
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                x = '1', y = '0';
            } else {
                x = '0', y = '1';
            }
            if (s[i] != x) {
                a++;
            }
            if (s[i] != y) {
                b++;
            }
        }
        return min(a, b);
    }
};