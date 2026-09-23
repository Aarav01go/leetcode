class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total = accumulate(nums.begin(), nums.end(), 0);
        int target = total - x;

        if(target < 0)
            return -1;

        int left = 0, sum = 0, len = -1;

        for(int right = 0; right < n; right++) {
            sum += nums[right];

            while(sum > target) {
                sum -= nums[left];
                left++;
            }

            if(sum == target)
                len = max(len, right - left + 1);
        }

        if(len == -1)
            return -1;

        return n - len;
    }
};