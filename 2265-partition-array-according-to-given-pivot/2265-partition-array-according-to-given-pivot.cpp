class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>small;
        int cnt=0;
        vector<int>big;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot)big.push_back(nums[i]);
            else if(nums[i]==pivot) cnt++;
            else small.push_back(nums[i]);
        }
        for(int i=0;i<cnt;i++) small.push_back(pivot);
        int k=0;
        while(small.size()<=nums.size()-1){
            small.push_back(big[k]);
            k++;
        }
        return small;
    }
};