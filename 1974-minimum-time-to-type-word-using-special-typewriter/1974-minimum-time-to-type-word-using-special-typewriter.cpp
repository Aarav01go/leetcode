class Solution {
public:
    int minTimeToType(string word) {
        int ans = word.size();
        char prev = 'a'; // Pointer starts at 'a'
        
        for (char curr : word) {
            int diff = abs(curr - prev);
            ans += min(diff, 26 - diff);
            prev = curr;
        }
        
        return ans;
    }
};