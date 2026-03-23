class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        long long MOD = 1e9 + 7;
        vector<vector<long long>> mx(m, vector<long long>(n));
        vector<vector<long long>> mn(m, vector<long long>(n));

        // Start
        mx[0][0] = mn[0][0] = grid[0][0];

        // First row
        for (int j = 1; j < n; j++)
            mx[0][j] = mn[0][j] = mx[0][j-1] * grid[0][j];

        // First column
        for (int i = 1; i < m; i++)
            mx[i][0] = mn[i][0] = mx[i-1][0] * grid[i][0];

        // Fill rest
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                long long v = grid[i][j];
                long long a = mx[i-1][j] * v;  // from top max
                long long b = mn[i-1][j] * v;  // from top min
                long long c = mx[i][j-1] * v;  // from left max
                long long d = mn[i][j-1] * v;  // from left min

                mx[i][j] = max({a, b, c, d});
                mn[i][j] = min({a, b, c, d});
            }
        }

        // Final answer
        if (mx[m-1][n-1] < 0) return -1;
        return mx[m-1][n-1] % MOD;
    }
};