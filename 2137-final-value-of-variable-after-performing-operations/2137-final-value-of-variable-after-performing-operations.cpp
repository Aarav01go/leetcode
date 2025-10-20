class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for ( int s =0;s<operations.size();s++){
            if ( operations[s]=="X++"||operations[s]=="++X") x+=1;
            else x-=1;
        }
        return x;
    }
};