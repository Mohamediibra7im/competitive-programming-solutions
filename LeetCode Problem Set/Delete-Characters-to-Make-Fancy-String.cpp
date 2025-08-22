class Solution
{
public:
    string makeFancyString(const string& s)
    {
        if (s.empty()) return "";

        string result;
        result.push_back(s[0]);
        int count = 1;

        for (size_t i = 1; i < s.size(); ++i)
        {
            if (s[i] == s[i - 1])
                ++count;
            else
                count = 1;

            if (count <= 2)
                result.push_back(s[i]);
        }

        return result;
    }
};