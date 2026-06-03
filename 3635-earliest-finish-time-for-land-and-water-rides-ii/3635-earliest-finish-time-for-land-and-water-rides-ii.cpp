class Solution {
public:

    int helper(vector<int>& s1,vector<int>& d1,vector<int>&s2, vector<int>& d2){
        int first=INT_MAX;
        for(int i=0;i<s1.size();i++){
            first=min(first,s1[i]+d1[i]);
        }
        int second=INT_MAX;
        for(int i=0;i<s2.size();i++){
            second=min(second,max(first,s2[i])+d2[i]);
        }
        return second;
    }
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
        int fl= helper(ls,ld,ws,wd);
        int fw= helper(ws,wd,ls,ld);
        return min(fl,fw);
    }
};