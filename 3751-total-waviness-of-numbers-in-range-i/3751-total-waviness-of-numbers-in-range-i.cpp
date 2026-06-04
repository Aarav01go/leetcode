class Solution {
public:
    int check(int n) {
        int ans = 0;
        if (n < 100) return 0;
        int right = n % 10; 
        n /= 10;
        int mid = n % 10; 
        n /= 10;
        while (n > 0) {
            int left = n % 10;
            n /= 10;
            if ((mid > right && mid > left)||(mid<right&&mid<left)) {
                ans++;
            }
            right = mid;
            mid = left;
        }
        return ans;
    }
    
    int totalWaviness(int num1, int num2) {
        int sum = 0;
        for (int i = num1; i <= num2; i++) {
            sum += check(i);
        }
        return sum;
    }
};