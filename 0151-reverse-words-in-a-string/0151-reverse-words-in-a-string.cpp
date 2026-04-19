class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word;
        stringstream ss(s);
        while(ss>>word){
            words.push_back(word);
        }
        string ret;
        for(int i=words.size()-1;i>=0;i--){
            ret+=words[i];
            if(i==0) break;
            ret+=' ';
        }
        return ret;

    }
};