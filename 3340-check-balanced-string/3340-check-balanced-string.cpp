class Solution {
public:
    bool isBalanced(string num) {
        int ev=0;
        int odd=0;
        for(int i=0;i<num.size();i++){
            if(i%2==0) ev+=(num[i]-'0');
            else odd+=(num[i]-'0');
        }
        return ev==odd;
    }
};