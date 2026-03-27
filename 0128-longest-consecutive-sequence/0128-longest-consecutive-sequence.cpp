class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        int len = 0;
        unordered_set<int> st;
        for (int i : nums) {
            st.insert(i);
        }

        for (int i : st) {
            if (st.find(i - 1) == st.end()) {
                int currentNum = i;
                int chk = 1;
                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    chk++;
                }

                len = max(len, chk);
            }
        }
        return len;
    }
};