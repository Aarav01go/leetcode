class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        for (auto& inv : invocations)
            adj[inv[0]].push_back(inv[1]);
        vector<bool> suspicious(n, false);
        queue<int> q;
        q.push(k);
        suspicious[k] = true;
        while (!q.empty()) {
            int node = q.front(); q.pop();
            for (int nb : adj[node])
                if (!suspicious[nb]) { suspicious[nb] = true; q.push(nb); }
        }
        for (auto& inv : invocations)
            if (!suspicious[inv[0]] && suspicious[inv[1]]) {
                vector<int> all;
                for (int i = 0; i < n; i++) all.push_back(i);
                return all;
            }
        vector<int> result;
        for (int i = 0; i < n; i++)
            if (!suspicious[i]) result.push_back(i);
        return result;
    }
};