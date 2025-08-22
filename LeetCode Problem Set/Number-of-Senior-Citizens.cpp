class Solution {
public:
    int countSeniors(vector<string>& details) {
        int age;
        int count=0;
        for(string s : details)
        {
            age=stoi(s.substr(11,2));
            if(age>60)
            {
                count++;
            }
        }
        return count;
    }
};