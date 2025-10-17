class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN;
        long second = LONG_MIN;
        long third = LONG_MIN;
        for( int &num:nums){
            if(num==first||num==second||num==third) continue;
                if( num>first){
                    third=second;
                    second=first;
                    first=num;
                }
                else if(num>second){
                    third=second;
                    second=num;
                }
                else if(num>third){
                    third=num;
                 }
        }
       unordered_set<int> s(nums.begin(), nums.end());
        if (s.size() < 3) return (int)first; 
        return (int)third;
        
    }
};