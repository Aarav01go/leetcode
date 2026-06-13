class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int ans = 0;
        int total = 0;
        for (int i : nums) {
            total += i;
        }
        int left = 0;
        for (int i : nums) {
            if (i > 0) {
                left += i;
            } else if (i == 0) {
                int right = total - left;
                if (left == right) {
                    ans += 2;
                } else if (abs(left - right) == 1) {
                    ans += 1;
                }
            }
        }
        return ans;
    }
};