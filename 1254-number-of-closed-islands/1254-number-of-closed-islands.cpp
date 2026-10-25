class Solution {
public:
    int m, n;
    bool dfs(vector<vector<int>>& grid, int r, int c) {
        if (r >= m || r < 0 || c >= n || c < 0) return false;
        if (grid[r][c] == 1) return true;
        grid[r][c] = 1;
        bool l = dfs(grid, r, c - 1);
        bool rt = dfs(grid, r, c + 1);
        bool u = dfs(grid, r - 1, c);
        bool d = dfs(grid, r + 1, c);
        return l && rt && u && d;
    }
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0 && dfs(grid, i, j)) count++;
            }
        }
        return count;
    }
};