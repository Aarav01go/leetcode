class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>freq;
        vector<int>v;
        for(int i:nums) freq[i]++;
        for(int i=0;i<freq.size();i++){
            if(freq[i]==2) v.push_back(i);
        }
        return v;

    }
};