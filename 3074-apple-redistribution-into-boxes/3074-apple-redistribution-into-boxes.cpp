class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int sum =0, target=0;
        for(auto i: apple){
            sum+=i;
        }
        int m,n= capacity.size()-1;
        m=n;
        for(;n>=0;n--){
            if(sum<=target) break;
            target+=capacity[n];
        }
        return m-n;
    }
};