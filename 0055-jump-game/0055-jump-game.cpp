class Solution {
public:
    bool canJump(vector<int>& nums) {
       long long maxind=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxind) return false;
            maxind= max(maxind,(long long)i+nums[i]);
        }
    return true; 
    }
};