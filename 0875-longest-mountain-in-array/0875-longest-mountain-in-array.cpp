class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans=0;
        int n= arr.size();
        for(int i=1;i<n-1;i++){
            int j;
            int cnt=0;
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                cnt++;
                j=i;
                while(j>0&&arr[j]>arr[j-1]) {
                    cnt++;
                    j--;
                }
                while(i<n-1&&arr[i]>arr[i+1]) {
                    cnt++;
                    i++;
                }
            }
               // else i++;
                ans=max(ans,cnt);
        }
        return ans;
        
    }
};