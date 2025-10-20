class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        for (int i=0;i<nums.size();i++){
            if ( nums[i]==target){
                v.push_back(i);
                break;
            }
        }
        for(int n=nums.size()-1;n>=0;n--){
            if(nums[n]==target){
                v.push_back(n);
                break;
            }
        }
        if( v.size()==0) return v={-1,-1};
        else if( v.size()==1){
            v.push_back(v[0]);
            return v;
        }
        else return v;
        
    }
};