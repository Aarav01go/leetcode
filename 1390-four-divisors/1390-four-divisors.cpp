class Solution {
public:
    vector<int> check(int n) {
        vector<int> ans;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                ans.push_back(i);

                if (i != n / i) {
                    ans.push_back(n / i);
                }
            }
        }
        return ans;
    }

    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            vector<int> vec = check(nums[i]);

            if (vec.size() == 4) {
                for (int x : vec) {
                    sum += x;
                }
            }
        }
        return sum;
    }
};
