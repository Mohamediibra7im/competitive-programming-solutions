class Solution {
public:
    bool isMagic(vector<vector<int>>& grid, int r, int c) {
        vector<bool> seen(10, false);
        for (int i = r; i < r + 3; i++) {
            for (int j = c; j < c + 3; j++) {
                int num = grid[i][j];
                if (num < 1 || num > 9 || seen[num]) {
                    return false;
                }
                seen[num] = true;
            }
        }
        int targetSum = grid[r][c] + grid[r][c + 1] + grid[r][c + 2];

        for (int i = r + 1; i < r + 3; i++) {
            int rowSum = grid[i][c] + grid[i][c + 1] + grid[i][c + 2];
            if (rowSum != targetSum) {
                return false;
            }
        }

        for (int j = c; j < c + 3; j++) {
            int colSum = grid[r][j] + grid[r + 1][j] + grid[r + 2][j];
            if (colSum != targetSum) {
                return false;
            }
        }

        int mainDiagonalSum = grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2];
        int antiDiagonalSum = grid[r][c + 2] + grid[r + 1][c + 1] + grid[r + 2][c];
        if (mainDiagonalSum != targetSum || antiDiagonalSum != targetSum) {
            return false;
        }
        
        return true;
    }
    
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        
        for (int i = 0; i < rows - 2; i++) {
            for (int j = 0; j < cols - 2; j++) {
                if (isMagic(grid, i, j)) {
                    count++;
                }
            }
        }
        
        return count;
    }
};