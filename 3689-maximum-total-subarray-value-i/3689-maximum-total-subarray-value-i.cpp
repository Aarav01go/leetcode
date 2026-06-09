class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(int i:nums){
            if(i>mx) mx=i;
            if(i<mn)mn=i;
        }
        return (long long)k * (mx - mn);
    }
};