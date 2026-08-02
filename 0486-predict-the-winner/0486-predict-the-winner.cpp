class Solution {
public:
    int solve(int i,int j,vector<int>& nums){
        if(i>j) return 0;
        if(i==j) return nums[i];
        int i_check= nums[i]+ min(solve(i+2,j,nums),solve(i+1,j-1,nums));
        int j_check= nums[j]+ min(solve(i,j-2,nums),solve(i+1,j-1,nums));
        return max(i_check,j_check);
        }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        int p1=solve(0,n-1,nums);
        int p2=sum-p1;;
        return p1>=p2;
    }
};