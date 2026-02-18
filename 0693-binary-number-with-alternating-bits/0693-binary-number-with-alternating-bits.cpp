class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prv=n&1;
        n>>=1;
        while(n>0){
            int cr = n&1;
            if(prv==cr) return false;
            else prv=cr;
            n>>=1;
        }
        return true;
    }
};
