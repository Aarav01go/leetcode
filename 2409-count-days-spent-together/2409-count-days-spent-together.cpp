class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for (int i = 1; i < 12; i++) {
            month[i] = month[i - 1] + month[i];
        }
        auto day = [&](string& s) {
            int m = stoi(s.substr(0, 2));
            int d = stoi(s.substr(3, 2));
            return (m > 1 ? month[m - 2] : 0) + d;
        };
        int start = max(day(arriveAlice), day(arriveBob));
        int end = min(day(leaveAlice), day(leaveBob));
        return max(0, end - start + 1);
    }
};