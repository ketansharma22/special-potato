// class Solution {
// public:

//     void solve(vector<string> &ans , string temp,int n,int open,int closed)
//     {
//         if(temp.length()==2*n){
//             ans.push_back(temp);
//             return;
//         }
        
//             if(open<n)
//             {
//                 temp=temp+"(";
//                 solve(ans,temp,n,open+1,closed);
//                 temp.pop_back();
//             }
//             if(closed<open){
//                 temp=temp+")";
//                 solve(ans,temp,n,open,closed+1);
//                 temp.pop_back();
//             }
        
//     }

//     vector<string> generateParenthesis(int n) {
//         vector<string> ans;
//         string temp="";
//         solve(ans,temp,n,0,0);
//         return ans;
//     }

// };