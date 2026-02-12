class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        double leftProduct = 1, rightProduct = 1;
        double ans = nums[0];

        for (int i = 0; i < n; i++) {
            // Reset to 1 if we hit a 0
            if (leftProduct == 0) leftProduct = 1;
            if (rightProduct == 0) rightProduct = 1;

            leftProduct *= nums[i];
            rightProduct *= nums[n - 1 - i];

            ans = max(ans, max(leftProduct, rightProduct));
        }

        return (int)ans;
    }
};