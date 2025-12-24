class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int choose;
        int ans=0;
        if(ruleKey == "type") choose=0;
        else if(ruleKey == "color") choose =1;
        else if (ruleKey == "name") choose=2;
        for(int i=0;i<items.size();i++){
            if( ruleValue == items[i][choose]) ans++;
        }
        return ans;
    }
};