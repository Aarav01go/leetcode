class Solution {
public:
    bool isPalindrome(int x) {
        long long n =0;
        int old = x  ;
        if(x<0) return false;
        else 
        while(x>0){
            n*=10;
            n+=x%10;
            x/=10;

        }
        return old==n;
    }
};