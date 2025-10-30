class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i;
        for(i=0;i<word.size();i++){
            if(ch==word[i])
                break;
        }
        if(i==word.size()) return word;
        int j=0;

        while(j<i){
            swap(word[j],word[i]);
            j++;
            i--;
        }
        return word;
    }
};