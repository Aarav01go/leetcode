class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(cnt==0&&s[i]=='6'){
                s[i]='9';
                break;
            }
        }
        int ans = stoi(s);
        return ans;
    }
};