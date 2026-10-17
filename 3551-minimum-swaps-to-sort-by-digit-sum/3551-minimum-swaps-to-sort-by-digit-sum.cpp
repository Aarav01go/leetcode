class Solution {
public:
    int sumdigit(int n){
        int ans=0;
        while(n>0){
            ans+=n%10;
            n/=10;
        }
        return ans;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            v[i]={nums[i],i};
        }
        sort(v.begin(),v.end(),[&](auto &a,auto &b){
            int x=sumdigit(a.first);
            int y=sumdigit(b.first);
            if(x!=y)return x<y;
            return a.first<b.first;
        });
        vector<bool> vis(n,false);
        int swaps=0;
        for(int i=0;i<n;i++){
            if(vis[i]||v[i].second==i)continue;
            int j=i;
            int len=0;
            while(!vis[j]){
                vis[j]=true;
                j=v[j].second;
                len++;
            }
            swaps+=len-1;
        }
        return swaps;
    }
};