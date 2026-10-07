class Solution {
public:
    int n;
    unordered_set<string> st;
    int maxLen;

    void solve(string& s, int i, string& curr, int count) {
        if (count < 0) return;

        if (i == n) {
            if (count == 0) {
                if (curr.length() > maxLen) {
                    maxLen = curr.length();
                    st.clear();
                }

                if (curr.length() == maxLen) {
                    st.insert(curr);
                }
            }
            return;
        }

        if (s[i] != ')' && s[i] != '(') {
            curr.push_back(s[i]);
            solve(s, i + 1, curr, count);
            curr.pop_back();
        } else {
            solve(s, i + 1, curr, count);

            curr.push_back(s[i]);
            if (s[i] == '(') {
                solve(s, i + 1, curr, count + 1);
            } else {
                solve(s, i + 1, curr, count - 1);
            }
            curr.pop_back();
        }
    }

    vector<string> removeInvalidParentheses(string s) {
        n = s.length();
        maxLen = 0;
        st.clear();

        string curr = "";
        solve(s, 0, curr, 0);

        return vector<string>(st.begin(), st.end());
    }
};