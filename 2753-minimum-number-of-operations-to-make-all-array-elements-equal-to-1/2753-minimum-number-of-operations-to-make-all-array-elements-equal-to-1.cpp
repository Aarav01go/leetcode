class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt1=0;
        int op=INT_MAX;
        int n=nums.size();
        for(int i:nums){
            if(i==1) cnt1++;
        }
        if (cnt1>0) return n-cnt1;
        for(int i=0;i<n-1;i++){
            int gc=nums[i];
            for(int j=i+1;j<n;j++){
                gc=__gcd(gc,nums[j]);
                if(gc==1){
                     op=min(j-i,op);
                     break;
                }
            }

        }
        if(op==INT_MAX) return -1;
        return op + n-1;
    }
};