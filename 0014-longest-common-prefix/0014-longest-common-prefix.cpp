class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        for(int i=0;i<strs[0].size();i++){
            bool chk=true;
            for(int j=1;j<strs.size();j++){
                if(strs[0][i]!=strs[j][i]) {
                    chk=false;
                    break;
                }
            }
            if (chk) s+=strs[0][i];
            else break;
        }
        return s;
    }
};