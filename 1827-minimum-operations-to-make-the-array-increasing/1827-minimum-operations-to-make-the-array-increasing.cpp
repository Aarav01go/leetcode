class Solution {
public:
    int minOperations(vector<int>& nums) {
        int x = nums[0];
        int sum = 0;
        for(int i = 1; i < nums.size(); i++) {
            x = max(x + 1, nums[i]);
            sum += x - nums[i];
        }
        return sum;
    }
};