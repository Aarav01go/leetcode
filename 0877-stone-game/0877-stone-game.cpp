class Solution {
public:
    map<pair<int,int>, int> dp;
    int solve(int i, int j, vector<int>& p) {
        if (i > j) return 0;
        if (i == j) return p[i];
        if (dp.count({i, j})) return dp[{i, j}];
        int i_check = p[i] + min(solve(i+2,j,p), solve(i+1,j-1,p));
        int j_check = p[j] + min(solve(i+1,j-1,p), solve(i,j-2,p));
        return dp[{i, j}] = max(i_check, j_check);
    }
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
        int sum = accumulate(piles.begin(), piles.end(), 0);
        int p1 = solve(0, n-1, piles);
        return p1 >= sum - p1;
    }
};