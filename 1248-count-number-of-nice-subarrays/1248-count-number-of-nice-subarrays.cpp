class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = nums[i] % 2;
        }
        int l = 0, r = 0, n = nums.size();
        int ans = 0;
        int res = 0;
        int c = 0;
        while (r < n) {
            ans += nums[r];
            if (nums[r] == 1) c = 0;
            while (ans == k) {
                c++;
                ans -= nums[l];
                l++;
            }
            res += c;
            r++;
        }
        return res;
    }
};