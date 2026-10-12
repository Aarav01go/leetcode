class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans;
        vector<int> freq(51, 0);

        for (int j = 0; j < n; j++) {
            freq[nums[j]]++;

            if (j >= k) freq[nums[j - k]]--;

            if (j >= k - 1) {
                vector<pair<int, int>> v;
                for (int val = 1; val <= 50; val++) {
                    if (freq[val] > 0) v.push_back({freq[val], val});
                }

                sort(v.rbegin(), v.rend());

                int sum = 0;
                for (int t = 0; t < x && t < (int)v.size(); t++) {
                sum += v[t].first * v[t].second;
                }

                ans.push_back(sum);
            }
        }

        return ans;
    }
};