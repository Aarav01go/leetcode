class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>bhondu(n,0);
        int paglu=0;
        int paglusathi=0;

        for(int i=0;i<n;i++){
            bhondu[i]=paglusathi;

            paglu += boxes[i]=='0'? 0:1;

            paglusathi+=paglu;
        }
        paglu=0;
        paglusathi=0;
        for(int i=n-1;i>=0;i--){
            bhondu[i]+=paglusathi;

            paglu += boxes[i]=='0'? 0:1;

            paglusathi+=paglu;
        }
        return bhondu;
    }
};