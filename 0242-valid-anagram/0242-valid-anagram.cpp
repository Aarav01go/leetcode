class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        
        unordered_map<char, int> mp;
        unordered_map<char, int> mpp;
        
        for (char c : s) {
            mp[c]++;
        }
        for (char c : t) {
            mpp[c]++;
        }
        
        return mp == mpp;
    }
};