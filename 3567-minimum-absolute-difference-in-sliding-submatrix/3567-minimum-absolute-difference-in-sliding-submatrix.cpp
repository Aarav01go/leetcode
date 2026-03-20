class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
       int m =grid.size();
       int n=grid[0].size();

       vector<vector<int>> rtn (m-k+1, vector<int>(n-k+1));

       for(int i=0;i<=m-k;i++){
        for(int j =0;j<=n-k;j++){
            set<int> val;
            for(int r=i;r<i+k;r++){
                for(int c=j;c<j+k;c++){
                    val.insert(grid[r][c]);
                }
            }
            if (val.size()==1){
                rtn[i][j]=0;
                continue;
            }

            int absmin=INT_MAX;
            auto prev = val.begin();
            auto curr = next(prev);

            while(curr!=val.end()){
                absmin = min(absmin,*curr-*prev);
                prev=curr;
                curr++;
            }
            rtn[i][j]=absmin;
        }
       }
        return rtn;
    }
};