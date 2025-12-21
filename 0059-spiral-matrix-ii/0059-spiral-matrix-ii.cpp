class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int srow=0, scol=0;
        int erow=n-1, ecol=n-1;
        vector<vector<int>> v(n, vector<int>(n));
        int w=1;

        while(srow<=erow&&scol<=ecol){
            for(int j=scol;j<=ecol;j++){
                v[srow][j]=w;
                w++;
            }
            for(int i=srow+1;i<=erow;i++){
                v[i][ecol]=w;
                w++;
            }
            for(int j= ecol-1;j>=scol;j--){
                if(srow==erow) break;
                v[erow][j]=w;
                w++;
            }
            for(int i=erow-1;i>srow;i--){
                if(scol==ecol)break;
                v[i][scol]=w;
                w++;
            }
            srow++;scol++;erow--;ecol--;
        }
        return v;
    }
};