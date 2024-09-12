// class Solution {
// public:

//     bool isSafe(vector<vector<int>> &board ,int &row,int &col,int &n){
//         //for straight upwards i.e, vertically
//         int x=row-1;
//         int y=col;
//         while(x>=0){
//             if(board[x][y]==1){
//                 return false;
//             }
//             x--;
//         }

//         //for left-upwards
//         x=row-1;
//         y=col-1;
//         while(x>=0 && y>=0){
//             if(board[x][y]==1){
//                 return false;
//             }
//             x--;
//             y--;
//         }

//         //for right-upwards
//         x=row-1;
//         y=col+1;
//         while(x>=0 && y<n){
//             if(board[x][y]==1){
//                 return false;
//             }
//             x--;
//             y++;
//         }
//         return true;
//     }



//     void solve(vector<vector<int>> &board,int &n, int &ans,int row){
//         if(row==n){
//             ans++;    //base-case
//             return;
//         }

//         for(int i=0;i<n;i++){
//             board[row][i]=1;
//             if(isSafe(board,row,i,n)){
//                 solve(board,n,ans,row+1);
//             }
//             board[row][i]=0;
//         }        
//         return;
//     }

//     int totalNQueens(int n) {
//         int ans;
//         vector<vector<int>> board(n,vector<int>(n,0));
//         solve(board,n,ans,0);
//         return ans;
//     }
// };