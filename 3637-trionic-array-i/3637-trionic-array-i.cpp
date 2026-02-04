class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 4) return false; 

        int cnt = -1; 
        for(int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i+1]) return false;

            if(cnt == -1) {
                if(nums[i] < nums[i+1]) cnt = 0; 
                else return false; 
            }
            else if(cnt == 0) {
                if(nums[i] > nums[i+1]) cnt = 1; 
            }
            else if(cnt == 1) {
                if(nums[i] < nums[i+1]) cnt = 2; 
            }
            else if(cnt == 2) {
                if(nums[i] > nums[i+1]) return false; 
            }
        }
        return cnt == 2;
    }
};