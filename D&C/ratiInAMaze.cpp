#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

bool isSafe(int i,int j,int arr[3][3],int row,int col,vector<vector<bool>> &visited){

}

void solve(int arr[3][3], int row, int col,int i,int j,vector<vector<bool>> &visited,vector<string> &path, string output){
    //base case
    if(i==row-1 && j==col-1){
        path.push_back(output);
        return;
    }

    //down move i+1,j
    if(isSafe(i+1,j,arr,row,col,visited)){
        visited[i+1][j]=true;
        solve(arr,row,col,i+1,j,visited,path,output+"D");
    }

}


int main()
{
    int arr[3][3]={{1,0,0},{1,1,0},{1,1,1}};
    int row=3;
    int col=3;
    vector<vector<bool>> visited(row,vector<bool>(col,false)); 
    visited[0][0]=true;
    vector<string> path;
    string output='';
    solve(arr,row,col,0,0,visited,path,output);

 return 0;
}