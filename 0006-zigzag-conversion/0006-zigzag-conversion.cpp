class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1 || numRows >= s.length()) return s;
        vector<string> rows(numRows);
        int row = 0;
        int step = 1;
        for (char c : s) {
            rows[row] += c;   
            if (row == 0) step = 1;
            else if (row == numRows - 1) step = -1;
            row += step;
        }
        string result = "";
        for (string r : rows) {
            result += r;
        }
        return result;
    }
};