class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        int wordLen = words[0].size();
        int totalWords = words.size();
        int n = s.size();
        unordered_map<string, int> wordFreq;
        for (string& w : words) wordFreq[w]++;
        for (int start = 0; start < wordLen; start++) {
            unordered_map<string, int> seen;
            int count = 0;
            int left = start;
            for (int right = start; right + wordLen <= n; right += wordLen) {
                string curr = s.substr(right, wordLen);
                if (wordFreq.count(curr)) {
                    seen[curr]++;
                    count++;
                    while (seen[curr] > wordFreq[curr]) {
                        string leftWord = s.substr(left, wordLen);
                        seen[leftWord]--;
                        count--;
                        left += wordLen;
                    }
                    if (count == totalWords) result.push_back(left);
                } else {
                    seen.clear();
                    count = 0;
                    left = right + wordLen;
                }
            }
        }
        return result;
    }
};