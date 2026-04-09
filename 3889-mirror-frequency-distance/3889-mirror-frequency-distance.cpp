#include <string>
#include <unordered_map>
#include <cmath>

using namespace std;

class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;

        int totalSum = 0;
        string letters = "abcdefghijklmnopqrstuvwxyz";
        string digits = "0123456789";

        for (int i = 0; i < 13; i++) {
            totalSum += abs(freq[letters[i]] - freq[letters[25 - i]]);
        }

        for (int i = 0; i < 5; i++) {
            totalSum += abs(freq[digits[i]] - freq[digits[9 - i]]);
        }

        return totalSum;
    }
};