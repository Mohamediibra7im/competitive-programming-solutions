class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ans(m - k + 1, vector<int>(n - k + 1, 0));
        for (int i = 0; i <= m - k; ++i) {
            for (int j = 0; j <= n - k; ++j) {
                set<int> vals;
                for (int x = 0; x < k; ++x) {
                    for (int y = 0; y < k; ++y) {
                        vals.insert(grid[i + x][j + y]);
                    }
                }
                if (vals.size() == 1) {
                    ans[i][j] = 0;
                } else {
                    int prev = -1e6, minDiff = INT_MAX;
                    for (int v : vals) {
                        if (prev != -1e6)
                            minDiff = min(minDiff, abs(v - prev));
                        prev = v;
                    }
                    ans[i][j] = minDiff;
                }
            }
        }
        return ans;
    }
};