class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size(), m = word2.size();

        // suffixMatch[i] = how many chars from END of word2 can match from word1[i..] 
        vector<int> suffixMatch(n+1, 0);
        int w2ptr = m-1;
        for (int i = n-1; i >= 0; i--) {
            suffixMatch[i] = suffixMatch[i+1];
            if (w2ptr >= 0 && word1[i] == word2[w2ptr]) {
                suffixMatch[i]++;
                w2ptr--;
            }
        }

        vector<int> result(m);
        bool changeUsed = false;
        int j = 0;

        for (int i = 0; i < n && j < m; i++) {
            if (word1[i] == word2[j]) {
                result[j++] = i;
            }
            else if (!changeUsed && suffixMatch[i+1] >= m-j-1) {
                result[j++] = i;
                changeUsed = true;
            }
        }

        return j == m ? result : vector<int>{};
    }
};