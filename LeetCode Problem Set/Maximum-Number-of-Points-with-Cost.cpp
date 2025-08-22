class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int m = points[0].size();
        vector<long long> curr(m, 0);
        for(int i = 0; i < points.size(); i++){
            curr[0] = points[i][0] + curr[0];
            for(int j = 1; j < m; j++){
                curr[j] = max(curr[j - 1] - 1, points[i][j] + curr[j]);
            }
            for(int j = m - 2; j >= 0; j--){
                curr[j] = max(curr[j + 1] - 1, curr[j]);
            }
        }
        return *max_element(curr.begin(), curr.end());
    }
};