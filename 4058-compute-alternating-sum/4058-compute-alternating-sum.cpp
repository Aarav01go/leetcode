class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
           sum+=pow(-1,i)* nums[i];
        }
        return sum;
    }
};