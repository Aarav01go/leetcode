class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                vector<bool> v(9);
                for(int a=i;a<i+3;a++){
                    for(int b=j;b<j+3;b++){
                        if(board[a][b]=='.') continue;
                        if(v[board[a][b]-'1']) return false;
                        else v[board[a][b]-'1']=true;
                    }
                }
            }
        }
        for(int i=0;i<9;i++){
            vector<bool> ich(9);
            vector<bool> jch(9);
            for(int j=0;j<9;j++){
                if(board[i][j]!='.') {
                    if(ich[board[i][j]-'1']) return false;
                    else ich[board[i][j]-'1']=true;
                    }

                if(board[j][i]!='.'){
                    if(jch[board[j][i]-'1']) return false;
                    else jch[board[j][i]-'1']=true;
                }
            }
            
        }
        return true;
    }
};