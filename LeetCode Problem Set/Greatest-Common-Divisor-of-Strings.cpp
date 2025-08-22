class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        if (str1 + str2 != str2 + str1)
            return "";
        return str1.substr(0, gcd(n, m));
    }
};