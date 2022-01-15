class Solution {
public: 
    bool isvalid(vector<vector<char>>& board,int row,int col,char c){
        for(int i=0;i<9;i++){
            if(board[i][col]==c)
                return false;
        }
        for(int i=0;i<9;i++){
            if(board[row][i]==c)
                return false;
        }
        
        int x=(row/3)*3,y=(col/3)*3;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[x+i][y+j]==c)
                return false;
            }
        }
        
        return true;
        
    }
    
    
    bool answer(vector<vector<char>>& board,int row,int col){
    if(row==9){
       return true;  
    }
    if (col==9)
        return answer(board,row+1,0);
    if(board[row][col]=='.')
        return answer(board,row,col+1);
    
    
        char c=board[row][col];
        board[row][col]='.';
         if(isvalid(board,row,col,c)){
           board[row][col]=c;         
           return answer(board,row,col+1); 
         }
       // board[row][col]=c;  
        return false;
             
    }
          
        
    
       
    
    
    bool isValidSudoku(vector<vector<char>>& board) {
        return answer(board,0,0);
    }
};