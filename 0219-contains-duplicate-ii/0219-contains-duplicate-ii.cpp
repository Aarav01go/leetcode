class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> tab;
        for(int i = 0; i < nums.size(); i++){
            if(tab.find(nums[i]) != tab.end()){
                if(i - tab[nums[i]] <= k)
                    return true;
            }
            tab[nums[i]] = i;
        }
        return false;
    }
};