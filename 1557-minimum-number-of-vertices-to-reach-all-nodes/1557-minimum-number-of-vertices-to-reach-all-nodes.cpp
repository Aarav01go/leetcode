class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool>indeg(n,false);
        for(auto &edge : edges){
           int u=edge[0];
           int v=edge[1];
             
             indeg[v]=true;
        }
        vector<int>v;
        for(int i=0;i<n;i++){
            if(indeg[i]==false){
                v.push_back(i);
            }
        }
        return v;
    }
};