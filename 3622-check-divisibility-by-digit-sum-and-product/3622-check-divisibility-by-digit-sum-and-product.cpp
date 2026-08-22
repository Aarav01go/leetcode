class Solution {
public:
    bool checkDivisibility(int n) {
        if (n<10 )return false;
        int m=n;
        int add=n%10;
        int mul=n%10;
        n/=10;
        while(n>0){
            add+=n%10;
            mul*=n%10;
            n=n/10;
        }
        return (m%(add+mul)==0);
    }
};