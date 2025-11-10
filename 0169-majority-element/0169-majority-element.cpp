class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>o;
        for(int &x : nums){
            o[x]++;
        }
        int mx = INT_MIN;
        int maxFreq = INT_MIN;
        for(auto x : o){
            int first = x.first;
            int second = x.second;
            if(second>maxFreq){
                mx = first;
                maxFreq = second;
            }
        }
        return mx;
    }
};