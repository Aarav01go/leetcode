class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> rev = digits;
        reverse(rev.begin(), rev.end());
        
        int carry = 1;
        for (int i = 0; i < rev.size(); i++) {
            rev[i] += carry;
            if (rev[i] == 10) {
                rev[i] = 0;
                carry = 1;
            } else {
                carry = 0;
                break;
            }
        }
        
        if (carry == 1) {
            rev.push_back(1);
        }
        
        reverse(rev.begin(), rev.end());
        return rev;
    }
};