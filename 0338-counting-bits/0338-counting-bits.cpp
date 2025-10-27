class Solution {
public:
    int hammingWeight(int n) {
        int cnt =0;
        for(int i=31 ; i>=0;i--){
            if ( (n>>i)&1==1) cnt++;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++){
            ans[i]=hammingWeight(i);
        }
        
        return ans;
    }
};