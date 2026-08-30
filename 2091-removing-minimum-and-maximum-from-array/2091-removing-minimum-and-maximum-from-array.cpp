class Solution {
public:
    int minimumDeletions(vector<int>& v) {
        int n = v.size();
        int x = 0, y = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] < v[x]) x = i;
            if(v[i] > v[y]) y = i;
        }
        if(x > y) swap(x, y);
        return min({y + 1, n - x, x + 1 + n - y});
    }
};