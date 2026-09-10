class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        int n = p.size(), m = t.size();
        sort(p.begin(), p.end());
        sort(t.begin(), t.end());
        int ans = 0;
        int j = 0;
        for(int i = 0; i < n && j < m; i++) {
            if(p[i] <= t[j]) {
                ans++;
                j++;
            }
            else {
                j++;
                i--;
            }
        }
        return ans;
    }
};