class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> positions;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            positions[nums[i]].push_back(i);
        }
        
        int min_dist = -1;

        for (auto const& [val, indices] : positions) {
            if (indices.size() < 3) continue;
            for (int i = 0; i + 2 < indices.size(); i++) {
                int current_dist = 2 * (indices[i + 2] - indices[i]);
                
                if (min_dist == -1 || current_dist < min_dist) {
                    min_dist = current_dist;
                }
            }
        }
        
        return min_dist;
    }
};