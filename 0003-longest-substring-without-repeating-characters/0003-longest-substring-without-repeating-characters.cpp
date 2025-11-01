class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int,int>mp;
        for(int i=0;i<256;i++) mp[i]=-1;
        int n=s.size();
        int l=0,r=0,maxl=0;
        while(n>r){
            if(mp[s[r]]!=-1&&mp[s[r]]>=l){
                l=mp[s[r]]+1;
            }

            int maxm=r-l+1;
            maxl=max(maxm,maxl);
            mp[s[r]]=r;
            r++;
        }
        return maxl;
    }
};