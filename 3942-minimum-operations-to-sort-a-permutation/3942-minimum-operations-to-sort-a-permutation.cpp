class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size(), p = 0, best = INT_MAX;
        bool asc = true, desc = true;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) p = i;
            if (nums[(i + 1) % n] != (nums[i] + 1) % n) asc = false;
            if (nums[(i + 1) % n] != (nums[i] + n - 1) % n) desc = false;
        }
        if (asc) best = min(best, min(p, n - p + 2));
        if (desc) best = min(best, min(n - p, p + 2));
        return best == INT_MAX ? -1 : best;
    }
};