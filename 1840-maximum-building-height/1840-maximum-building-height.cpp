class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& r) {
        r.push_back({1, 0});
        sort(r.begin(), r.end());
        if (r.back()[0] != n) {
            r.push_back({n, 1000000000});
        }
        int m = r.size();
        for (int i = 1; i < m; ++i) {
            r[i][1] = min(r[i][1], r[i-1][1] + r[i][0] - r[i-1][0]);
        }
        for (int i = m - 2; i >= 0; --i) {
            r[i][1] = min(r[i][1], r[i+1][1] + r[i+1][0] - r[i][0]);
        }
        int ans = 0;
        for (int i = 0; i < m - 1; ++i) {
            long long h1 = r[i][1], h2 = r[i+1][1];
            long long id1 = r[i][0], id2 = r[i+1][0];
            ans = max(ans, (int)((h1 + h2 + id2 - id1) / 2));
        }
        return ans;
    }
};