class Solution {
public:
    int dosum(int n){
        int ans=0;
        while(n>0){
            ans+=n%10;
            n/=10;
        }
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i==dosum(nums[i])) return i;
        }
        return -1;
    }
};