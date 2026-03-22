class Solution {
public:
    void rotate90(vector<vector<int>>& g, int n){
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)
                swap(g[i][j], g[j][i]);
        for(int i=0;i<n;i++)
            reverse(g[i].begin(), g[i].end());
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for(int d=0;d<4;d++){
            if(mat == target) return true;
            rotate90(mat, n);
        }
        return false;
    }
};