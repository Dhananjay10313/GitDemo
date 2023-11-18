class Solution {
public:
    
    
    bool check(vector<vector<char>> &grid,ll x,ll y,char ck){
        for(ll i=0;i<9;i++){
            if(grid[x][i]==ck)
                return false;
            if(grid[i][y]==ck)
                return false;
            if(grid[i/3+3*x/3][i%3+3*y/3]==ck)
                return false;
        }
        return true;
    }
    
    bool solve(vector<vector<char>> &grid){
        for(ll i=0;i<9;i++){
            for(ll j=0;j<9;j++){
                if(grid[i][j]=='.'){
                    bool flag=false;
                    for(char k='1';k<='9' && !flag;k++){
                        // grid[i][j]='.';
                        flag=check(grid,i,j,k);
                        if(flag){
                            grid[i][j]=k;
                            flag=solve(grid);
                        }
                    }
                    return flag;
                }
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};