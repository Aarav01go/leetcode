class Solution {
    int m, n;
    bool dfs(vector<vector<char>>& board, string& word, int r, int c, int idx) {
        if (idx == word.size()) return true;
        if (r < 0 || r >= m || c < 0 || c >= n || board[r][c] != word[idx]) {
            return false;
        }
        char temp = board[r][c];
        board[r][c] = '*'; 
        bool found = dfs(board, word, r + 1, c, idx + 1) || dfs(board, word, r - 1, c, idx + 1) || dfs(board, word, r, c + 1, idx + 1) || dfs(board, word, r, c - 1, idx + 1);
        board[r][c] = temp; 
        return found;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        for (int r = 0; r < m; r++) {
            for (int c = 0; c < n; c++) {
                if (board[r][c] == word[0] && dfs(board, word, r, c, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};