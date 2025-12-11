class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());
        int ans = 0, pick = piles.size() / 3;
        for (int i = 1; pick > 0; i += 2) {
            ans += piles[i];
            pick--;
        }
        return ans;
    }
};
