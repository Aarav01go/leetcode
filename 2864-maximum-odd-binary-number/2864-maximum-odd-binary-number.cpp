class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one = 0;
        int sz = s.size();
        string ret;
        for(auto i:s){
            if(i=='1') one++;
        }
        for(int i=0;i<sz-1;i++){
            ret+='0';
        }
        ret+='1';
        for(int i=0;i<one-1;i++){
            ret[i]='1';
        }
        
        return ret;
        
    }
};