#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int count(int n) {
        int cnt = 0;
        while (n > 0){
            if (n % 2 != 0) cnt++;
            n /= 2;
        }
        return cnt;
    }

    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int countI = count(arr[i]);
                int countJ = count(arr[j]);
                if (countI > countJ || (countI == countJ && arr[i] > arr[j])) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr;
    }
};