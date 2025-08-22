class Solution {
public:
    int minMoves(vector<string>& classroom, int energy) {
        int m = classroom.size(), n = classroom[0].size();
        vector<pair<int, int>> litter;
        int sx, sy;
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j) {
                if (classroom[i][j] == 'S')
                    sx = i, sy = j;
                if (classroom[i][j] == 'L')
                    litter.emplace_back(i, j);
            }
        int L = litter.size();
        if (L == 0)
            return 0;
        auto pos2idx = [&](int x, int y) {
            for (int i = 0; i < L; ++i)
                if (litter[i].first == x && litter[i].second == y)
                    return i;
            return -1;
        };
        using State = tuple<int, int, int>;
        queue<tuple<int, int, int, int>> q;
        unordered_map<long long, int> vis;
        auto encode = [&](int x, int y, int mask) {
            return ((long long)x * n + y) << L | mask;
        };
        q.emplace(sx, sy, 0, energy);
        vis[encode(sx, sy, 0)] = energy;
        int moves = 0;
        int dirs[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while (!q.empty()) {
            int sz = q.size();
            while (sz--) {
                auto [x, y, mask, e] = q.front();
                q.pop();
                if (mask == (1 << L) - 1)
                    return moves;
                for (auto& d : dirs) {
                    int nx = x + d[0], ny = y + d[1];
                    if (nx < 0 || ny < 0 || nx >= m || ny >= n)
                        continue;
                    char cell = classroom[nx][ny];
                    if (cell == 'X')
                        continue;
                    int ne = e - 1;
                    if (ne < 0)
                        continue;
                    if (cell == 'R')
                        ne = energy;
                    int nmask = mask;
                    if (cell == 'L') {
                        int idx = pos2idx(nx, ny);
                        nmask |= (1 << idx);
                    }
                    long long key = encode(nx, ny, nmask);
                    if (vis.count(key) && vis[key] >= ne)
                        continue;
                    vis[key] = ne;
                    q.emplace(nx, ny, nmask, ne);
                }
            }
            ++moves;
        }
        return -1;
    }
};