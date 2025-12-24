class Solution {
public:
    vector<string>result;
    void solve(string s, int i, string temp){
        if(i>=s.size()){
            for(int j=0;j<result.size();j++){
                if(temp==result[j]) return;
            }
            result.push_back(temp);
            return;
        }
        temp.push_back(tolower(s[i]));
        solve(s,i+1,temp);
        temp.pop_back();
        temp.push_back(toupper(s[i]));
        solve(s,i+1,temp);


    }
    vector<string> letterCasePermutation(string s) {
        string temp;
        solve(s,0,temp);
        return result;
    }
};