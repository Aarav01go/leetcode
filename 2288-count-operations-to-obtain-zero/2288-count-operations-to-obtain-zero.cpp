class Solution {
public:
    
    int countOperations(int num1, int num2) {
        if (num1 == 0 || num2 == 0) return 0;
        if (num1==num2) return 1;
        int a,b,cnt=0;

       (num1 > num2) ? (a = num1, b = num2) : (a = num2, b = num1);

        while(a>0&&b>0){
             a=a-b;
             if(a<b){
                int c=b;
                b=a;
                a=c;
             }
             cnt++;
            
        }
        return cnt;
        
    }
};