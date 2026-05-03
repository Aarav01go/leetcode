class Solution {
public:
    string agee(string s){
        for(int i=0;i<s.size()-1;i++){
            swap(s[i],s[i+1]);
        }
        return s;
    }
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        if(s==goal) return true;
        for(int i=0;i<s.size();i++){
            if(agee(s)==goal) return true;
            s=agee(s);
        }
        return false;
    }
};