class Solution
{
public:
    int minDays(vector<vector<int>> &grid)
    {
        if (solve(grid) != 1)
            return 0;

        int m = grid.size(), n = grid[0].size();

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 1)
                {
                    grid[i][j] = 0;
                    if (solve(grid) != 1)
                        return 1;
                    grid[i][j] = 1;
                }
            }
        }
        return 2;
    }

private:
    vector<vector<bool>> visited;

    int solve(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size(), cnt = 0;
        visited.assign(m, vector<bool>(n, false));

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 1 && !visited[i][j])
                {
                    bfs(grid, i, j);
                    ++cnt;
                    if (cnt > 1)
                        return cnt;
                }
            }
        }
        return cnt;
    }

    void bfs(vector<vector<int>> &grid, int x, int y)
    {
        queue<pair<int, int>> q;
        q.push({x, y});
        visited[x][y] = true;

        int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

        while (!q.empty())
        {
            auto [cx, cy] = q.front();
            q.pop();

            for (auto dir : directions)
            {
                int nx = cx + dir[0], ny = cy + dir[1];
                if (nx >= 0 && ny >= 0 && nx < grid.size() && ny < grid[0].size() &&
                    grid[nx][ny] == 1 && !visited[nx][ny])
                {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
};