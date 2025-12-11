class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& group) {
        unordered_map< int , vector<int>>m;
        vector<vector<int>>v;
        int n=group.size();
        for(int i=0;i<n;i++){
            int size = group[i];
            m[size].push_back(i);
            if(m[size].size()==size){
                v.push_back(m[size]);
                m[size].clear();
            }
        }
        return v;
    }
};