class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        // Try swapping even positions
        if (s1[0] != s2[0]) swap(s1[0], s1[2]);
        
        // Try swapping odd positions
        if (s1[1] != s2[1]) swap(s1[1], s1[3]);
        
        // After potential swaps, are they identical?
        return s1 == s2;
    }
};