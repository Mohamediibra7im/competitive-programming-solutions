class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> d(n, 0);
        for(auto &i: roads){
            d[i[0]]++;
            d[i[1]]++;
        }
        sort(d.begin(), d.end());
        long long ans =0;
        for(int j=n-1; j>=0; j--){
            ans += (long long)d[j]*(j+1);
        }



        return ans;
    }
};