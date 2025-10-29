class Solution {
public:
    int smallestNumber(int n) {
        if(n==0||n==1) return 1;
        int m=1;
        for(int i=0;i<32;i++){
            if (m>n){
                break;
                
            }
            m*=2;
        }
        return m-1;
        
    }
};