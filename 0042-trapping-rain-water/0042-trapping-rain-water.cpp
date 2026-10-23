class Solution {
public:
    int trap(vector<int>& h) {
        int sum = 0;
        int n = h.size();
        vector<int> l(n, 0);
        vector<int> r(n, 0);
        for (int i = 1; i < n; i++) {
            l[i] = max(l[i - 1], h[i - 1]);
            r[n - i - 1] = max(r[n - i], h[n - i]);
        }
        for (int i = 0; i < n; i++) {
            int w = min(l[i], r[i]) - h[i];
            if (w > 0) {
                sum += w;
            }
        }
        return sum;
    }
};