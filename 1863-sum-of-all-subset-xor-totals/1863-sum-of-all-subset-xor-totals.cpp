class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int bhondu =0;
        for(int riri:nums) bhondu|=riri;
        int potato = pow(2,nums.size()-1);
        return bhondu*potato;
    }
};