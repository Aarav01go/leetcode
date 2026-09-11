class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> v(10, 0);
        for(int i : digits)
            v[i]++;

        int ans = 0;
        for(int i = 0; i < 10; i++) {
            if(i % 2 != 0 || v[i] == 0)
                continue;

            v[i]--;

            for(int j = 0; j < 10; j++) {
                if(v[j] == 0)
                    continue;

                v[j]--;

                for(int k = 1; k < 10; k++) {
                    if(v[k] > 0)
                        ans++;

                }

                v[j]++;
            }

            v[i]++;
        }

        return ans;
    }
};