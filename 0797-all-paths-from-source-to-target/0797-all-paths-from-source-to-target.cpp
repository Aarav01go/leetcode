class Solution {
public:
    void DFS(vector<vector<int>>& graph,int u,int target,vector<vector<int>>&result,vector<int>&temp ){
        temp.push_back(u);
        if(u==target){
            result.push_back(temp);
        }
        else{
            for(int &v: graph[u]) DFS(graph,v,target,result,temp);
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();

        int source=0;
        int target=n-1;

        vector<vector<int>>result;
        vector<int>temp;
        DFS(graph,source,target,result,temp);
        return result;
    }
};