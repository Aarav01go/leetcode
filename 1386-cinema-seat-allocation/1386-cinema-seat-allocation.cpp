class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& rs) {
        unordered_map<int, vector<int>> mp;
        for (auto a : rs)
            mp[a[0]].push_back(a[1]);
        int ans = (n - mp.size()) * 2;
        for (auto [row, seats] : mp) {
            bool left = true, mid = true, right = true;
            for (int x : seats) {
                if (x >= 2 && x <= 5) left = false;
                if (x >= 4 && x <= 7) mid = false;
                if (x >= 6 && x <= 9) right = false;
            }
            if (left && right)
                ans += 2;
            else if (left || mid || right)
                ans++;
        }
        return ans;
    }
};