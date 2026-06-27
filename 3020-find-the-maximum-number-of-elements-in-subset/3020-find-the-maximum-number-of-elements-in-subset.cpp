class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> m;
        for (int x : nums) m[x]++;
        int ans = m.count(1) ? (m[1] % 2 == 0 ? m[1] - 1 : m[1]) : 1;
        for (auto& [k, v] : m) {
            if (k == 1) continue;
            long long curr = k;
            int len = 0;
            while (m.count(curr) && m[curr] >= 2) {
                len += 2;
                curr *= curr;
                if (curr > 1e9) break;
            }
            len += m.count(curr) ? 1 : -1;
            ans = max(ans, len);
        }
        return ans;
    }
};