
class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        long long MOD = 1e9 + 7;
        int n = nums.size();
        int B = sqrt(n);

        vector<long long> individual_mult(n, 1);
        vector<vector<long long>> batch(B, vector<long long>(B, 1));

        for (auto& q : queries) {
            int l = q[0], r = q[1], k = q[2];
            long long v = q[3];

            if (k >= B) {
                for (int i = l; i <= r; i += k) {
                    individual_mult[i] = (individual_mult[i] * v) % MOD;
                }
            } else {
                for (int i = l; i <= r; i += k) {
                    individual_mult[i] = (individual_mult[i] * v) % MOD;
                }
            }
        }

        long long final_xor = 0;
        for (int i = 0; i < n; ++i) {
            long long final_val = (1LL * nums[i] * individual_mult[i]) % MOD;
            final_xor ^= final_val;
        }

        return (int)final_xor;
    }
};