class Solution {
public:
    int mirrorDistance(int n) {
        if(n<10) return 0;
        int r=0;
        int m=n;
        while(n>0){
            r = r * 10 + (n % 10);
            n/=10;
        }
        return abs(r-m);
    }
};