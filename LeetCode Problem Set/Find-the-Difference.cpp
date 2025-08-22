class Solution {
public:
    char findTheDifference(string s, string t) {

        sort(t.begin(), t.end());
        sort(s.begin(), s.end());

        for (int i = 0; i < s.length(); i++) 
        {
            if (s[i] != t[i]) 
            {
                // Return the letter that was added to t
                return t[i]; 
            }
        }

        // If all characters match, return the last character of t
        return t[t.length() - 1];
    }
};