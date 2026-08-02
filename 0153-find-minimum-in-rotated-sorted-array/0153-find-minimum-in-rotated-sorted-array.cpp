class Solution {
public:
    int findMin(vector<int>& nums) {
        int mx=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mx) mx=nums[i];
        }
        return mx;
    }
};