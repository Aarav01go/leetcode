class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt=0;
        for(char c1:jewels){
            for( char c2:stones){
                if(c1==c2) cnt++;
            }
        }
        return cnt;
    }
};