class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long ms=mass;
        for(int a:asteroids){
            if(a<=ms){
                ms+=a;
            }
            else return false;
        }
        return true;
    }
};