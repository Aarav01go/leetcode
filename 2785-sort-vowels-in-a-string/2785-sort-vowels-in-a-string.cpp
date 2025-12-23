class Solution {
public:
    string sortVowels(string s) {
        vector<char> ch;
        for(auto c:s){
            if(tolower(c)=='a'||tolower(c)=='e'||tolower(c)=='i'||tolower(c)=='o'||tolower(c)=='u') ch.push_back(c);
        }
        sort(ch.begin(),ch.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='u') {
                s[i]=ch[j];
                j++;
            }

        }
        return s;
    }
};