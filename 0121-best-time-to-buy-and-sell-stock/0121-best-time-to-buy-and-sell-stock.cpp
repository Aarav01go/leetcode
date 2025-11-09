class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) 
                minPrice = price;             // new best buy
            else if (price - minPrice > maxProfit) 
                maxProfit = price - minPrice; // new best profit
        }

        return maxProfit;
    }
};
