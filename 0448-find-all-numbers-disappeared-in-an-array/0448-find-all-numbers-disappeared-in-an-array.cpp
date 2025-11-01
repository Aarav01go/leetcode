class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<bool>pres(n+1);
        for(auto i:nums){
            pres[i]=true;
        }
        vector<int>ans;
        for(int i=1;i<=nums.size();i++){
            if(pres[i]==false){
                ans.push_back(i);
            }
        }
        return ans;
    }
};