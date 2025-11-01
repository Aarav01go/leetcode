class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        set<int>s(nums.begin(),nums.end());
        for(int i=1 ;i<nums.size()+1;i++){
            if(!s.count(i)) v.push_back(i);
        }
        return v;
        
    }
};