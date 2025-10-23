class Solution {
public:
    bool hasSameDigits(string s) {
        while  (s.size()>2){
         for(int j=0;j<s.size()-1;j++){
            int a = s[j]-'0';
            int b= s[j+1]-'0';
            s[j]= char((a+b)%10+'0');
            }
            s.pop_back();
        } 
        return s.size()==2 && (s[0]==s[1]);
    }
};