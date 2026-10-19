class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int> seen(n+1,0);
        vector<int> ans(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            seen[A[i]]++;
            if(seen[A[i]]==2)cnt++;
            seen[B[i]]++;
            if(seen[B[i]]==2)cnt++;
            ans[i]=cnt;
        }
        return ans;
    }
};