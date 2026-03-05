class Solution {
public:
    int minOperations(string s) {
        int cnt=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                cnt++;
                if(s[i]=='1') s[i+1]='0';
                else s[i+1]='1';
            }
        }
        return min(cnt,(int)s.size() - cnt);
    }
};