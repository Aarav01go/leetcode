#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++) {
            v.push_back({nums[i], i});
        }

        sort(v.begin(), v.end(), greater<pair<int, int>>());

        vector<pair<int, int>> topK(v.begin(), v.begin() + k);

        sort(topK.begin(), topK.end(), [](auto& a, auto& b) {
            return a.second < b.second;
        });

        vector<int> ans;
        for (auto& p : topK) {
            ans.push_back(p.first);
        }
        
        return ans;
    }
};