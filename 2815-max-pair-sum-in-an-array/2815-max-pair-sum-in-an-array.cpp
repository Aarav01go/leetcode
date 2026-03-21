class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<int> mx;
        int sum=-1;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int m=n%10;
            n/=10;
            while(n>0){
                if(m<n%10)
                    m=n%10;
                n/=10;
            }
            mx.push_back(m);   
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(mx[i]==mx[j]){
                    sum=max(sum,nums[i]+nums[j]);
                }
            }
        }
        return sum;
    }
};