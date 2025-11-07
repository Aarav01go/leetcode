class Solution {
public:
    bool isPerfectSquare(int num) {
        long long root = sqrt(num);
        return root * root == num;
    }
};
