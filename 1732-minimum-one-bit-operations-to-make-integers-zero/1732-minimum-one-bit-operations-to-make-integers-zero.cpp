class Solution {
public:
    int minimumOneBitOperations(int n) {
        if (n == 0) return 0;

        vector<long long> dat(31, 0);
        dat[0] = 1;
        for (int i = 1; i < 31; i++) {
            dat[i] = dat[i - 1] * 2 + 1;
        }

        long long ans = 0;
        int sign = 1;
        for (int i = 30; i >= 0; i--) {
            if (((n >> i) & 1) == 0) continue;
            ans += sign * dat[i];
            sign *= -1;
        }

        return (int)ans;
    }
};
