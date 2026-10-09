class Solution {
public:
    int heightChecker(vector<int>& h) {
        int cnt=0;
        vector<int>v=h;
        sort(v.begin(),v.end());
        for(int i=0;i<h.size();i++){
            if(v[i]!=h[i]) cnt++;
        }
        return cnt;
    }
};