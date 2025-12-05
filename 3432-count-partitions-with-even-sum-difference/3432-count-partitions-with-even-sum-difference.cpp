class Solution {
public:
    int countPartitions(vector<int>& nums) {
        long long total = 0;
        for (int x : nums) total += x;

        long long pre = 0;
        int cnt = 0;

        for (int i = 1; i < nums.size(); i++) {
            pre += nums[i-1];
            long long suf = total - pre;

            if (abs(pre - suf) % 2 == 0) cnt++;
        }

        return cnt;
    }
};
