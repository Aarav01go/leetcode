class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        unordered_map<char,int>mp;
        for(char c: allowed){
            mp[c]++;
        }
        for(int i=0;i<words.size();i++){
            bool chk=true;
            for(int j=0;j<words[i].size();j++){
                if(mp[words[i][j]]<1) {
                    chk=false;
                    break;
                }
            }
            if(chk)count++;
        }
        return count;
    }
};