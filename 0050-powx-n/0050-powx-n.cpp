class Solution {
public:
    double power(double a, long long n){
   if(n==0) return 1;
   else {
      double x = power(a,n/2);
      if(n%2==0) return x*x;
      else return a*x*x;
   }
    }
    double myPow(double x, long long n){
        if(n<0) return 1/ power(x,n);
        return power(x,n);
    }
};