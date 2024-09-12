//leetcode problem nqueen (51)
class Solution {
public:
    void makeAns(vector<vector<string>>& output,vector<int> path,int n){
        vector<string> ans;
        for(auto i:path){
            string temp(n,'.');
            temp[i]='Q';
            ans.push_back(temp);
        }
        output.push_back(ans);

    }

    bool isSafe(vector<vector<int>> &board,int row, int n, int col){
        //for straight up col
        int x=row-1;
        int y=col;
        while(x>=0){
            if(board[x][y]==1){
                return false;
            }
            x--;
        }
        
        //for diagonallu left upwards
        x=row-1;
        y=col-1;
        while(y>=0 && x>=0){
            if(board[x][y]==1){
                return false;
            }
            x--;
            y--;
        }

        //for diagonally right upwards
        x=row-1;
        y=col+1;
        while(x>=0 && y<n){
            if(board[x][y]==1){
                return false;
            }
            x--;
            y++;
        }
        return true;


    }

    void solve(vector<vector<int>> &board,int n,int row,vector<vector<string>> &ans,vector<int> &path){
        if(row==n){
            makeAns(ans,path,n);
            return;
        }
        for(int i=0;i<n;i++){
            board[row][i]=1;
            if(isSafe(board,row,n,i)){
                path.push_back(i);
                solve(board,n,row+1,ans,path);
                path.pop_back();
            }
            board[row][i]=0;
        }
        return;
    }

    vector<vector<string>> solveNQueens(int n) {
            vector<vector<string>> ans;
            vector<vector<int>> board(n,vector<int>(n,0));
            vector<int> path;
            solve(board,n,0,ans,path);
            return ans;
            
            
    }
};