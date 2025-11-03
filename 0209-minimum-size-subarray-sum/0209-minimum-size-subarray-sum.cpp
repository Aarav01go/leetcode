class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int minlen=INT_MAX;
        int i=0,j=0;
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>=target){
                sum-=nums[i];
                int len=j-i+1;
                minlen=min(minlen,len);
                i++;
            }
            j++;
        }
        if(minlen==INT_MAX) return 0;
        return minlen;
        
    }
};