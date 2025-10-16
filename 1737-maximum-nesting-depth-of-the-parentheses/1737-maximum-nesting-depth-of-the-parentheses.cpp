class Solution {
public:
    int maxDepth(string s) {
        int cnt=0, maxcnt=0;
        for( char &ch :s){
            if(ch=='(') cnt++;
            else if(ch==')'){
                maxcnt=max(cnt,maxcnt);
                cnt--;
            }
        }
        return maxcnt;
    }
};