class Solution {
public:

    int climbStairs(int n) {
        long a=1,  b=1,c;
        for(int i=0;i<n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return a;
    }
};