class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return 0;

        vector<int> dist(n, -1);
        queue<int> q;

        q.push(0);
        dist[0] = 0;

        while (!q.empty()) {
            int x = q.front();
            q.pop();

            for (int j = 1; j <= nums[x]; j++) {
                int y = x + j;
                if (y >= n) break;

                if (dist[y] == -1) {
                    dist[y] = dist[x] + 1;
                    if (y == n - 1) return dist[y];
                    q.push(y);
                }
            }
        }
        return -1;
    }
};
