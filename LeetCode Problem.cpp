classÂ SolutionÂ {
public:
Â Â Â Â boolÂ isSafe(vector<string>Â &board,Â intÂ row,Â intÂ col,Â intÂ n){
Â Â Â Â Â Â Â Â //vertical
Â Â Â Â Â Â Â Â for(intÂ jÂ =Â 0;Â jÂ <Â board.size();Â j++){
Â Â Â Â Â Â Â Â Â Â Â Â if(board[j][col]Â ==Â 'Q'){
Â Â Â Â Â Â Â Â Â Â Â Â Â Â Â Â returnÂ false;
Â Â Â Â Â Â Â Â Â Â Â Â }
Â Â Â Â Â Â Â Â }

Â Â Â Â Â Â Â Â //diagonalÂ left
Â Â Â Â Â Â Â Â for(intÂ iÂ =Â row,Â jÂ =Â col;Â iÂ >=0Â &&Â jÂ >=0;Â i--,Â j--){
Â Â Â Â Â Â Â Â Â Â Â Â if(board[i][j]Â ==Â 'Q'){
Â Â Â Â Â Â Â Â Â Â Â Â Â Â Â Â returnÂ false;
Â Â Â Â Â Â Â Â Â Â Â Â }
Â Â Â Â Â Â Â Â }

Â Â Â Â Â Â Â Â //diagonalÂ right
Â Â Â Â Â Â Â Â for(intÂ iÂ =Â row,Â jÂ =Â col;Â iÂ >=0Â &&Â jÂ <n;Â i--,Â j++){
Â Â Â Â Â Â Â Â Â Â Â Â if(board[i][j]Â ==Â 'Q'){
Â Â Â Â Â Â Â Â Â Â Â Â Â Â Â Â returnÂ false;
Â Â Â Â Â Â Â Â Â Â Â Â }
Â Â Â Â Â Â Â Â }

Â Â Â Â Â Â Â Â returnÂ true;
Â Â Â Â }

Â Â Â Â voidÂ nQueens(vector<string>Â &board,Â intÂ row,Â intÂ n,Â vector<vector<string>>Â &ans){
Â Â Â Â Â Â Â Â if(rowÂ ==Â n){
Â Â Â Â Â Â Â Â Â Â Â Â ans.push_back({board});
Â Â Â Â Â Â Â Â Â Â Â Â return;


// --- New Submission ---
                return false;
            }
        }

        //diagonal right
        for(int i = row, j = col; i >=0 && j <n; i--, j++){
            if(board[i][j] == 'Q'){
                return false;
            }
        }

        return true;
    }

    void nQueens(vector<string> &board, int row, int n, vector<vector<string>> &ans){
        if(row == n){
            ans.push_back({board});
            return;
        //diagonal left
        for(int i = row, j = col; i >=0 && j >=0; i--, j--){
            if(board[i][j] == 'Q'){
            }
        }

            if(board[j][col] == 'Q'){
                return false;
    bool isSafe(vector<string> &board, int row, int col, int n){
        //vertical
        for(int j = 0; j < board.size(); j++){
class Solution {
public:
