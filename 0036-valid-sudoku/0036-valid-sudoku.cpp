class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9]={0};
        int col[9][9]={0};
        int square[9][9]={0};
        for(int r=0;r<board.size();r++){
            for(int c=0;c<board[r].size();c++){
                if(board[r][c]!='.'){
                    int val = board[r][c]-'0'-1;
                    int k=(r/3)*3+(c/3);
                    if(rows[r][val]||col[c][val]||square[k][val]) return false;
                    rows[r][val]=col[c][val]=square[k][val]=1;
                }
                
            }

        }
        return true;
    }
};