class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n=s1.size();
        vector<int>ev(26,0);
        vector<int>odd(26,0);

        for(int i=0;i<n;i++){
            if(i%2==0){
                ev[s1[i]-'a']++;
                ev[s2[i]-'a']--;
            }
            else {
                odd[s1[i]-'a']++;
                odd[s2[i]-'a']--;
            }
        }
        for(int i=0;i<26;i++){
            if(ev[i]!=0||odd[i]!=0) return false;

        }
        return true;
    }
};