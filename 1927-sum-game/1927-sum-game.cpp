class Solution {
public:
    bool sumGame(string num) {
        int alice = 0, bob = 0;
        int aq = 0, bq = 0;
        for(int i = 0; i < num.size() / 2; i++) {
            if(num[i] == '?') aq++;
            else alice += num[i] - '0';
        }
        for(int i = num.size() / 2; i < num.size(); i++) {
            if(num[i] == '?') bq++;
            else bob += num[i] - '0';
        }
        if((aq - bq) % 2 != 0) return true;
        int diff = alice - bob;
        return diff != (bq - aq) / 2 * 9;
    }
};