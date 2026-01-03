class Solution {
public:
    int mod=1e9+7;
    int numOfWays(int n) {
        long two=6,three=6;
        n--;
        while(n>0){
            long nexttwo=(3*two+2*three)%mod;
            three= (2*two+2*three)%mod;
            two=nexttwo;
            n--;
        }
        return (int)(two+three)%mod;
    }
};