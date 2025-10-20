class Solution {
public:
    int guessNumber(int n) {
        long left=1 ;
        long right = n;
        while(left<=right){
            long mid = (left + right) /2;
            if( guess(mid)==-1)  right=mid-1;
            else if( guess(mid)==1) left=mid+1;
            else if( guess(mid)==0) return mid;
        }
        return -1;   
    }
};