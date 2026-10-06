class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();

        for(int i = 0; i < n - 2; i++) {
            if(nums[i] == 0) {
                for(int j = i; j < i + 3; j++) {
                    nums[j] = 1 - nums[j];
                }
                cnt++;
            }
        }

        for(int i = 0; i < n; i++) {
            if(nums[i] == 0)
                return -1;
        }

        return cnt;
    }
};