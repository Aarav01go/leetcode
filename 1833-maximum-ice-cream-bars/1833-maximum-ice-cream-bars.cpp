class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxCost = 0;
        for (int c : costs) maxCost = max(maxCost, c);
        vector<int> freq(maxCost + 1, 0);
        for (int c : costs) freq[c]++;
        int res = 0;
        for (int i = 1; i <= maxCost; ++i) {
            if (!freq[i]) continue;
            if (coins < i) break;
            int buy = min(freq[i], coins / i);
            res += buy;
            coins -= buy * i;
        }
        return res;
    }
};