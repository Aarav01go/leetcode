class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int minDist = n; 
        bool found = false;

        for (int i = 0; i < n; i++) {
            if (words[i] == target) {
                found = true;
                int absDist = abs(i - startIndex);
                int circularDist = n - absDist;
                minDist = min({minDist, absDist, circularDist});
            }
        }

        return found ? minDist : -1;
    }
};