class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>check(58,0);
        for(char c:word){
            check[c-'A']++;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(check[i]>0&&check[i+32]>0) ans++;
        }
        return ans;
    }
};