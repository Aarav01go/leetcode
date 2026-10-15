class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            vector<int> seen(101, 0);
            int distinct = 0;
            for (int j = i; j < n; j++) {
                if (seen[nums[j]] == 0) distinct++;
                seen[nums[j]]++;
                ans += distinct * distinct;
            }
        }
        return ans;
    }
};