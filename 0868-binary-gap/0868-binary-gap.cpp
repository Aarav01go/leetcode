class Solution {
public:
    int binaryGap(int n) {
        int mx = 0;
        int last_pos = -1;
        int current_pos = 0;

        while (n > 0) {
            if (n & 1) { // Check if the last bit is 1
                if (last_pos != -1) {
                    mx = max(mx, current_pos - last_pos);
                }
                last_pos = current_pos;
            }
            n >>= 1; // Shift right to check the next bit
            current_pos++;
        }
        
        return mx;
    }
};