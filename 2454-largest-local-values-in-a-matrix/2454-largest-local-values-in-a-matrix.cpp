class Solution {
public:
int maxi(vector<vector<int>>&nums,int i,int j){
    int mx=0;
    for(int m=i; m<i+3;m++){
        for(int n=j;n<j+3;n++){
            if(mx<nums[m][n]) mx=nums[m][n];
        }
    }
    return mx;
}
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int mx;
        vector<vector<int>>maxlocal( grid.size()- 2, vector<int>(grid.size() - 2));
        for(int i=0;i<grid.size()-2;i++){
            for(int j=0;j<grid.size()-2;j++){
                maxlocal[i][j]=maxi(grid,i,j);
            }
        }
        return maxlocal;
    }
};