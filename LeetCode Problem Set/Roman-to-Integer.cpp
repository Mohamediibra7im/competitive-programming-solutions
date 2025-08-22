class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'I')
            {
                if (i < n - 1 && (s[i + 1] == 'V' || s[i + 1] == 'X'))
                {
                    result -= 1;
                }
                else
                {
                    result += 1;
                }
            }
            else if (s[i] == 'V')
            {
                result += 5;
            }
            else if (s[i] == 'X')
            {
                if (i < n - 1 && (s[i + 1] == 'L' || s[i + 1] == 'C'))
                {
                    result -= 10;
                }
                else
                {
                    result += 10;
                }
            }
            else if (s[i] == 'L')
            {
                result += 50;
            }
            else if (s[i] == 'C')
            {
                if (i < n - 1 && (s[i + 1] == 'D' || s[i + 1] == 'M'))
                {
                    result -= 100;
                }
                else
                {
                    result += 100;
                }
            }
            else if (s[i] == 'D')
            {
                result += 500;
            }
            else if (s[i] == 'M')
            {
                result += 1000;
            }
        }

        return result;
    }
};