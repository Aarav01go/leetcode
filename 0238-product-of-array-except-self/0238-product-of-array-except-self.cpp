class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total=1;
        int n=nums.size();
        int cnt0=0;
        for(int i : nums){
            if(i==0) {
                cnt0++;
                continue;
            }
            total*=i;
        }
        vector<int>mul;
        for(int num : nums){
            if(num==0&&cnt0-1==0)mul.push_back(total);
            else if(num==0&&cnt0-1>0)mul.push_back(0);
            else if(cnt0>0) mul.push_back(0);
            else mul.push_back(total/num);
        }
        return mul;
    }
};