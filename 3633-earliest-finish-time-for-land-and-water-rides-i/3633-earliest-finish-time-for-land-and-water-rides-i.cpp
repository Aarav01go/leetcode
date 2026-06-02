class Solution {
public:
    int solve(vector<int>& s1, vector<int>& d1, vector<int>& s2, vector<int>& d2) {
        int end1 = INT_MAX;
        for (int i = 0; i < s1.size(); i++) {
            end1 = min(end1, s1[i] + d1[i]);
        }

        int total = INT_MAX;
        for (int i = 0; i < s2.size(); i++) {
            int start2 = max(end1, s2[i]);
            total = min(total, start2 + d2[i]);
        }
        return total;
    }

    int earliestFinishTime(vector<int>& lst, vector<int>& ld, vector<int>& wst, vector<int>& wd) {
        int ans1 = solve(lst, ld, wst, wd);
        int ans2 = solve(wst, wd, lst, ld);
        return min(ans1, ans2);
    }
};