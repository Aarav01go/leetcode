class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        int mx=0;
        for(auto c:candies){
            if(c>mx) mx=c;
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=mx) v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
};