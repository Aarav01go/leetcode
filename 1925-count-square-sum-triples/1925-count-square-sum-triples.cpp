class Solution {
public:
    int countTriples(int n) {
        int bhondu = 0;
        for(int i = 1; i <= n; ++i) {
            for(int j = i + 1; j <= n; ++j) {
                int paglu = i * i + j * j;
                int k = sqrt(paglu);
                
                if (k <= n && k * k == paglu) {
                    bhondu += 2;
                }
            }
        }
        return bhondu;
    }
};