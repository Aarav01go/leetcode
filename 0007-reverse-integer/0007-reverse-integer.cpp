class Solution {
public:
    int reverse(int x) {
        string rv = to_string(x);
        string rvl = "";

        if (x < 0) {
            rvl += '-';
            for (int i = rv.size() - 1; i > 0; i--) {
                rvl += rv[i];
            }
        } 
        else {
            for (int i = rv.size() - 1; i >= 0; i--) {
                rvl += rv[i];
            }
        }

        long long ans = stoll(rvl);

        if (ans > INT_MAX || ans < INT_MIN)
            return 0;

        return ans;
    }
};