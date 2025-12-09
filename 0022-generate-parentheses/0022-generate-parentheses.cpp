class Solution {
public:
    vector<string>bhondu;
    void solve(string &paglu,int n,int open,int close){
        if(paglu.size()==2*n){
            bhondu.push_back(paglu);
        }

        if(open<n){
            paglu.push_back('(');
            solve(paglu,n,open+1,close);
            paglu.pop_back();
        }
        if(open>close){
            paglu.push_back(')');
            solve(paglu,n,open,close+1);
            paglu.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string paglu= "";
        int open=0;
        int close=0;
        solve(paglu,n,open,close);
        return bhondu;
    }
};