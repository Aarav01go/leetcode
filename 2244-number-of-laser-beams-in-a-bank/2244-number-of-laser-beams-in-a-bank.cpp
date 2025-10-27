class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>v;
        for(int i=0;i<bank.size();i++){
            int cnt=0;
            for( int j=0; j<bank[i].size();j++){
                if(bank[i][j]=='1') cnt++;
            }
            if (cnt>0) v.push_back(cnt);
        }
        int laser=0;
        for(int i=1;i<v.size();i++){
           laser += v[i-1]*v[i];
        }
        return laser;
        
    }
};