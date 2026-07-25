class Solution {
public:
    int maxProduct(int n) {
        int let=n;
        int i=0;
        vector<int> v;
        while(let>0){
            i++;
            v.push_back(let%10);
            let/=10;
        }
        sort(v.begin(),v.end());
        return v[i-1]*v[i-2];
    }
};