class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n= points.size();
        sort(points.begin(),points.end());
        vector<int> prev=points[0];
        int cnt=1;
        for(int i=0;i<n;i++){
            int csp=points[i][0];
            int cep=points[i][1];

            int psp=prev[0];
            int pep=prev[1];
            if(csp>pep){
                cnt++;
                prev=points[i];
            }
            if(csp<pep){
                prev[0]=max(csp,psp);
                prev[1]=min(cep,pep);
            }
        }
        return cnt;
    }
};