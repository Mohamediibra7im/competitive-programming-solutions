class Solution
{
public:
    void dfs(vector<vector<int>> &visited, int i, int j)
    {
        int n = visited.size();
        if (i < 0 || i >= n || j < 0 || j >= n || visited[i][j] != 0) {
            return;
        }
        visited[i][j] = 1;
        dfs(visited, i - 1, j);
        dfs(visited, i + 1, j);
        dfs(visited, i, j - 1);
        dfs(visited, i, j + 1);
    }

    int regionsBySlashes(vector<string> &grid)
    {
        int n = grid.size();
        vector<vector<int>> visited(n * 3, vector<int>(n * 3, 0));

        int regions = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == ' ') {
                    continue;
                }
                if (grid[i][j] == '/') {
                    visited[i * 3][j * 3 + 2] = 1;
                    visited[i * 3 + 1][j * 3 + 1] = 1;
                    visited[i * 3 + 2][j * 3] = 1;
                } else if (grid[i][j] == '\\') {
                    visited[i * 3][j * 3] = 1;
                    visited[i * 3 + 1][j * 3 + 1] = 1;
                    visited[i * 3 + 2][j * 3 + 2] = 1;
                }
            }
        }

        for (int i = 0; i < n * 3; i++) {
            for (int j = 0; j < n * 3; j++) {
                if (visited[i][j] == 0) {
                    dfs(visited, i, j);
                    regions++;
                }
            }
        }

        return regions;
    }
};