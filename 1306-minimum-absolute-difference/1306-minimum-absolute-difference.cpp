class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(), arr.end());
        int mini=INT_MAX;
        for(int i=1;i<arr.size();i++){
            int j=arr[i]-arr[i-1];
            mini= min(mini,j);
        }
        for(int i =1;i<arr.size();i++){
            if(arr[i]-arr[i-1]==mini) {
                vector<int>temp={arr[i-1],arr[i]};
                ans.push_back(temp);    
            }
        }
        return ans;
        
    }
};