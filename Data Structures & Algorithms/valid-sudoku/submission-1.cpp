class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>>rows(9,vector<int>(9,0));
        vector<vector<int>>col(9,vector<int>(9,0));
        vector<vector<int>>boxes(9,vector<int>(9,0));
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                if(board[r][c]=='.')continue;
                int num=board[r][c]-'1';
                int boxind=(r/3)*3+(c/3);
                if(rows[r][num]||col[num][c]||boxes[boxind][num])return false;
                rows[r][num]=1;
                col[num][c]=1;
                boxes[boxind][num]=1;

            }
           
        }
         return true;
    }
};
