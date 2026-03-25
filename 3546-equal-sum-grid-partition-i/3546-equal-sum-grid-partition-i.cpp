class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
    int n = grid.size(), m = grid[0].size();
    vector<long long> rowSums(n, 0), colSums(m, 0);
    long long totalSum = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            rowSums[i] += grid[i][j];
            colSums[j] += grid[i][j];
        }
        totalSum += rowSums[i];
    }

    if (totalSum % 2 != 0) return false; // Early exit for odd sums
    long long target = totalSum / 2;

    long long prefix = 0;
    for(int i = 0; i < n - 1; i++) {
        prefix += rowSums[i];
        if(prefix == target) return true;
    }

    prefix = 0;
    for(int j = 0; j < m - 1; j++) {
        prefix += colSums[j];
        if(prefix == target) return true;
    }

    return false;
}
};