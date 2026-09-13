class Solution {
public:
    int countoffset(vector<vector<int>>& img1, vector<vector<int>>& img2,int r,int c){
        int n=img1.size();
        int count=0;
        for(int i=0;i<n ;i++){
            for(int j=0;j<n;j++){

                int b_i=i+r;
                int b_j=j+c;
                if(b_i<0||b_i>=n||b_j<0||b_j>=n) continue;
                if(img1[i][j]==1&&img2[b_i][b_j]==1) count ++;
            }
        }
        return count;
    }
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        int mxcount=0;
        for(int rowoffset=-n+1;rowoffset<n;rowoffset++){
            for(int coloffset=-n+1;coloffset<n;coloffset++){
                int count=countoffset(img1,img2,rowoffset,coloffset);
                mxcount=max(mxcount,count);
            }
        }
        return mxcount;
    }
};