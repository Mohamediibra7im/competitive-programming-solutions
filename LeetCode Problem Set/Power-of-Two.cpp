class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (1 << 31) % n == 0;
    }
};