class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(nums[i]);
        }
        long long sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()/2) sum-=(long long)nums[i]*nums[i];
            else sum+=nums[i]*nums[i];
        }
        return sum;
    }
};