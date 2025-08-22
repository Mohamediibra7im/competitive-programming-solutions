class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;

        std::string strX;
        while (x > 0)
        {
            strX.push_back((x % 10) + '0');
            x /= 10;
        }

        size_t left = 0, right = strX.size()-1;
        while (left < right)
        {
            if (strX[left] != strX[right])
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};