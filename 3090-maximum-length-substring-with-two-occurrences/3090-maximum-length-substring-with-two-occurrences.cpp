class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n= s.size();
        int i=0,j=0,res=0;
        unordered_map<char,int>mp;
        while(j<n){
            mp[s[j]]++;            
            while(i<j&&mp[s[j]]>2){
                mp[s[i]]--;
                i++;
            }
            res=max(res,j-i+1);
            j++;
        }
        return res;
    }
};