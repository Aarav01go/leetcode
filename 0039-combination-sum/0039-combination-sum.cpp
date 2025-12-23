class Solution {
public:
    vector<vector<int>>result;
    void solve(vector<int>& candidates,int i,vector<int>temp,int target,int sum){
        if(i>=candidates.size()) return; 
        if(sum==target) {
            result.push_back(temp);
            return;
        }
        if(sum>target) return;
        temp.push_back(candidates[i]);
        solve(candidates,i,temp,target,sum+candidates[i]);
        temp.pop_back();
        solve(candidates,i+1,temp,target,sum);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        solve(candidates,0,temp,target,0);
        return result;
    }
};