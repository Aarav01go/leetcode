class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int depth = 0;

        for (char c : s) {
            if (c == '(') {
                depth++;
                if (depth > 1)
                    result += c;
            } else {
                if (depth > 1)
                    result += c;
                depth--;
            }
        }
        return result;
    }
};