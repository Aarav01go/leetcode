class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int mp[256] = {0};
        int len = 0;

        for(char c : chars) {
            mp[c]++;
        }

        for(int i = 0; i < words.size(); i++) {
            int wordCount[256] = {0};
            bool canForm = true;

            for(int j = 0; j < words[i].size(); j++) {
                char c = words[i][j];
                wordCount[c]++;

                if(wordCount[c] > mp[c]) {
                    canForm = false;
                    break;
                }
            }

            if(canForm) {
                len += words[i].size();
            }
        }

        return len;
    }
};