class Solution {
public:
    string evaluate(string s, vector<vector<string>>& know) {
        unordered_map<string,string> mp;

        for(auto x : know)
            mp[x[0]] = x[1];
        string result = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                string word = "";
                i++;
                while(s[i] != ')') {
                    word += s[i];
                    i++;
                }
                if(mp.find(word) != mp.end())
                    result += mp[word];
                else
                    result += "?";
            }
            else {
                result += s[i];
            }
        }
        return result;
    }
};