class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,ans=0;
        while(i<j){
            int curr= min(height[i],height[j])*(j-i);
            ans=max(curr,ans);
            if(height[i]>height[j]) j--;
            else i++;
        }
        return ans;
    }
};