class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int left = 0;
        int zero = 0, one = 0;
        int ans = 0;

        for(int right = 0; right < s.size(); right++) {
            if(s[right] == '0')
                zero++;
            else
                one++;

            while(zero > k && one > k) {
                if(s[left] == '0')
                    zero--;
                else
                    one--;
                left++;
            }

            ans += right - left + 1;
        }

        return ans;
    }
};