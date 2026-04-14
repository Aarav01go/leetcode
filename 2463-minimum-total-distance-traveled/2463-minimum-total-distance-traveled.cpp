class Solution {
public:
    long long solve(int ri,int fi,vector<int>& robot, vector<int>&post,vector<vector<long long>>&t){
        if(ri>=robot.size()) return 0;
        if(fi>=post.size())return 1e12;
        if(t[ri][fi]!=-1) return t[ri][fi];
        long long tak= abs(robot[ri]-post[fi])+solve(ri+1,fi+1,robot,post,t);
        long long skip = solve(ri,fi+1,robot,post,t);
        return t[ri][fi] = min(tak,skip);
    }

    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(),robot.end());
        sort(factory.begin(),factory.end());

    
        vector<int>post;
        for(int i=0;i<factory.size();i++){
            int limit= factory[i][1];
            int pos = factory[i][0];
            for(int j=0;j<limit;j++){
                post.push_back(pos);
            }
        }
        int m=robot.size();
        int n=post.size();
        vector<vector<long long>>t(m,vector<long long>(n,-1));

        return solve(0,0,robot,post,t);
    }
};