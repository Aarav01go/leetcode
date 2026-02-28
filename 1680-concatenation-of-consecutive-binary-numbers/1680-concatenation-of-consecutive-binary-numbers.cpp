#include <string>
#include <algorithm>

class Solution {
public:
    string binary(int n) {
        string s = "";
        while(n > 0) {
            if(n % 2 == 0) s.push_back('0');
            else s.push_back('1');
            n /= 2;
        }
        reverse(s.begin(), s.end());
        return s;
    }

    int concatenatedBinary(int n) {
        string final_str = ""; 
        for(int i = 1; i <= n; i++) {
            final_str += binary(i);
        }
        
        long long sum = 0;
        int MOD = 1e9 + 7;
        
        for(int i = 0; i < final_str.size(); i++) {
            sum = (sum * 2) % MOD;
            if(final_str[i] == '1') {
                sum = (sum + 1) % MOD;
            }
        }
        return sum;
    }
};