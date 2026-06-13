class Solution {
    int power(int x, int n) {
        int res = 1;
        x %= 1337;
        for(int i=0; i<n; i++) {
            res = (res * x) % 1337;
        }
        return res;
    }
public:
    int superPow(int a, vector<int>& b) {
        int ans = 1;
        for(int digit : b) {
            ans = (power(ans, 10) * power(a, digit)) % 1337;
        }
        return ans;
    }
};