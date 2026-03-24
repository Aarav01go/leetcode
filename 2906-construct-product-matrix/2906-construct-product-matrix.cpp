class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int mod = 12345;
        int total = n * m;

        vector<long long> prefix(total, 1), suffix(total, 1);
        
        for(int i = 1; i < total; i++){
            int r = (i-1)/m, c = (i-1)%m;
            prefix[i] = (prefix[i-1] * grid[r][c]) % mod;
        }
        for(int i = total-2; i >= 0; i--){
            int r = (i+1)/m, c = (i+1)%m;
            suffix[i] = (suffix[i+1] * grid[r][c]) % mod;
        }
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < total; i++){
            int r = i/m, c = i%m;
            mat[r][c] = (prefix[i] * suffix[i]) % mod;
        }

        return mat;
    }
};