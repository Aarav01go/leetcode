class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() > 1) {
            int m1 = INT_MIN, m2 = INT_MIN;
            int a = -1, b = -1;
            for (int j = 0; j < (int)stones.size(); j++) {
                if (stones[j] >= m1) {
                    m2 = m1;
                    b = a;
                    m1 = stones[j];
                    a = j;
                } else if (stones[j] > m2) {
                    m2 = stones[j];
                    b = j;
                }
            }
            if (a > b) {
                stones.erase(stones.begin() + a);
                stones.erase(stones.begin() + b);
            } else {
                stones.erase(stones.begin() + b);
                stones.erase(stones.begin() + a);
            }
            if (m1 != m2) stones.push_back(m1 - m2);
        }
        return stones.empty() ? 0 : stones[0];
    }
};