class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int total = 0;
        int n = grid.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0) {
                    total += grid[i][j] * 4 + 2;
                    if (i > 0) {
                        total -= min(grid[i][j], grid[i - 1][j]) * 2;
                    }
                    if (j > 0) {
                        total -= min(grid[i][j], grid[i][j - 1]) * 2;
                    }
                }
            }
        }
        return total;
    }
};