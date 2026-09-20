class Solution {
public:
    int reverseDegree(string s) {
        int len=26;
        int sum=0;
        int i=1;
        for(char c: s){
            sum+=(len-(c-'a'))*i;
            i++;
        }
        return sum;
    }
};