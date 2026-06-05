class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> low(26, -1);
        vector<int> up(26, -1);
        for (int i = 0; i < word.size(); i++) {
            if (islower(word[i])) {
                low[word[i] - 'a'] = i;
            } else if (isupper(word[i])) {
                if (up[word[i] - 'A'] == -1) {
                    up[word[i] - 'A'] = i;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (low[i] != -1 && up[i] != -1 && low[i] < up[i]) {
                ans++;
            }
        }
        return ans;
    }
};