class Solution {
public:
    bool isSafe(vector<string> &board, int row, int col, int n){
        //vertical
        for(int j = 0; j < board.size(); j++){
            if(board[j][col] == 'Q'){
                return false;
            }
        }

        //diagonal left
        for(int i = row, j = col; i >=0 && j >=0; i--, j--){
            if(board[i][j] == 'Q'){
                return false;
            }
        }

        //diagonal right
        for(int i = row, j = col; i >=0 && j <n; i--, j++){
            if(board[i][j] == 'Q'){
                return false;
            }
        }
