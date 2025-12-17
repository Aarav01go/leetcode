class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        int n = code.size();                 // array ka size
        vector<int> ans(n, 0);               // answer array initialize

        if (k == 0)                          // agar k = 0 hai
            return ans;                      // sab values 0 hongi

        // circular array handle karne ke liye array duplicate kar rahe
        vector<int> arr = code;              
        arr.insert(arr.end(), code.begin(), code.end());

        int windowSum = 0;                   // sliding window ka sum

        // ===================== CASE 1: k > 0 =====================
        if (k > 0) {

            // index 0 ke liye next k elements ka initial sum
            for (int i = 1; i <= k; i++)     
                windowSum += arr[i];

            // har index ke liye window slide karenge
            for (int i = 0; i < n; i++) {

                ans[i] = windowSum;          // current index ka answer

                // left element remove (window ka first element)
                windowSum -= arr[i + 1];

                // right side ka naya element add
                windowSum += arr[i + k + 1];
            }
        }

        // ===================== CASE 2: k < 0 =====================
        else {

            k = -k;                          // k ko positive bana rahe

            // index 0 ke liye previous k elements ka initial sum
            for (int i = n - k; i < n; i++)  
                windowSum += arr[i];

            // sliding window move karenge
            for (int i = 0; i < n; i++) {

                ans[i] = windowSum;          // current index ka answer

                // window ka left element remove
                windowSum -= arr[i + n - k];

                // circular next element add (isliye i + n use kiya)
                windowSum += arr[i + n];
            }
        }

        return ans;                          // final result return
    }
};
