class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        vector<int>ct(n+1,0);
        for(int c:citations){
            if(c>=n) ct[n]++;
            else ct[c]++;
        }
        int cnt=0;
        for(int i=n;i>=0;i--){
            cnt+=ct[i];
            if(cnt>=i) return i;
        }
        return 0;
    }
};