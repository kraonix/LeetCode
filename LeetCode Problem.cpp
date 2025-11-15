classÃÂ SolutionÃÂ {
public:
ÃÂ ÃÂ ÃÂ ÃÂ boolÃÂ isSafe(vector<string>ÃÂ &board,ÃÂ intÃÂ row,ÃÂ intÃÂ col,ÃÂ intÃÂ n){
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ //vertical
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ for(intÃÂ jÃÂ =ÃÂ 0;ÃÂ jÃÂ <ÃÂ board.size();ÃÂ j++){
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ if(board[j][col]ÃÂ ==ÃÂ 'Q'){
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ returnÃÂ false;
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ }
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ }

ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ //diagonalÃÂ left
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ for(intÃÂ iÃÂ =ÃÂ row,ÃÂ jÃÂ =ÃÂ col;ÃÂ iÃÂ >=0ÃÂ &&ÃÂ jÃÂ >=0;ÃÂ i--,ÃÂ j--){
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ if(board[i][j]ÃÂ ==ÃÂ 'Q'){
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ returnÃÂ false;
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ }
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ }

ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ //diagonalÃÂ right
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ for(intÃÂ iÃÂ =ÃÂ row,ÃÂ jÃÂ =ÃÂ col;ÃÂ iÃÂ >=0ÃÂ &&ÃÂ jÃÂ <n;ÃÂ i--,ÃÂ j++){
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ if(board[i][j]ÃÂ ==ÃÂ 'Q'){
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ returnÃÂ false;
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ }
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ }

ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ returnÃÂ true;
ÃÂ ÃÂ ÃÂ ÃÂ }

ÃÂ ÃÂ ÃÂ ÃÂ voidÃÂ nQueens(vector<string>ÃÂ &board,ÃÂ intÃÂ row,ÃÂ intÃÂ n,ÃÂ vector<vector<string>>ÃÂ &ans){
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ if(rowÃÂ ==ÃÂ n){
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ans.push_back({board});
ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ ÃÂ return;


// --- New Submission ---
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
Â Â Â Â Â Â Â Â //diagonalÂ left
Â Â Â Â Â Â Â Â for(intÂ iÂ =Â row,Â jÂ =Â col;Â iÂ >=0Â &&Â jÂ >=0;Â i--,Â j--){
Â Â Â Â Â Â Â Â Â Â Â Â if(board[i][j]Â ==Â 'Q'){
Â Â Â Â Â Â Â Â Â Â Â Â }
Â Â Â Â Â Â Â Â }

Â Â Â Â Â Â Â Â Â Â Â Â if(board[j][col]Â ==Â 'Q'){
Â Â Â Â Â Â Â Â Â Â Â Â Â Â Â Â returnÂ false;
Â Â Â Â boolÂ isSafe(vector<string>Â &board,Â intÂ row,Â intÂ col,Â intÂ n){
Â Â Â Â Â Â Â Â //vertical
Â Â Â Â Â Â Â Â for(intÂ jÂ =Â 0;Â jÂ <Â board.size();Â j++){
classÂ SolutionÂ {
public:


// --- New Submission ---
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
