class Solution {
public:
    int minOperations(vector<int>& nums) {
        stack<int>st;
        int op=0;
        for(int i=0;i<nums.size();i++){
            while(!st.empty()&& st.top()>nums[i]) st.pop();
            if( nums[i]==0) continue;
            else if(st.empty()||nums[i]>st.top()){
                st.push(nums[i]);
                op++;
            }
        }
        return op;
    }
};