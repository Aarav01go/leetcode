class Solution {
public:
    vector<string>result;
    void solve(string s, int i, string temp){
        if (i == s.size()) {
            result.push_back(temp);
            return;
        }

        if (isalpha(s[i])) {
            temp.push_back(tolower(s[i]));
            solve(s, i + 1, temp);
            temp.pop_back();

            temp.push_back(toupper(s[i]));
            solve(s, i + 1, temp);
            temp.pop_back();
        } else {
            temp.push_back(s[i]);
            solve(s, i + 1, temp);
            temp.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        string temp;
        solve(s,0,temp);
        return result;
    }
};