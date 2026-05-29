class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int n:nums){
            int curr=n;
            int sum=0;
            while(curr>0){
                if(sum>ans) break;
                sum+=curr%10;
                curr/=10;
            }
            if(sum<ans){
                ans=sum;
            }
        }
        return ans;
    }
};