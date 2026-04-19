class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int a = 0;
    while (a < nums.size() && nums[a] < target) {
        a++;
    }
    return a;
    }
};