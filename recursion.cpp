#include <iostream>
#include <stdio.h>
#include <vector>
#include <limits.h>
#include <typeinfo>
using namespace std;


//min no of element to make up the given target
// int  func(int target,vector<int>& arr){
//     if(target==0)   return 0;

//     if(target<0)    return INT_MAX;

//     //recursive function
//     int mini=INT_MAX;
//     for(int i=0; i<sizeof(arr);i++){
//         int ans=func(target-arr[i]+1,arr);
//         mini=min(mini,ans);
//     }
//     return mini;
// }
// int main(){
//     vector<int> arr{1,2,3};
//     int target=5;
//     int ans=func(target,arr);
//     cout<<ans;
    
// }

//reverse string using recursion

// void reversee (string &str,int s,int e){
//     //base case
//     if(s>e || s==e){
//         return ;
//     }
//     //one case solving
//     swap(str[s],str[e]);
//     reversee(str,s+1,e-1);
// } 

// int main(){
//     string str="Ketan Sharma";
//     int s=0;
//     int e=str.size()-1;
//     reversee(str,s,e);
//     cout<<str;
// }


// palindrome check with recursion

bool checkPalindrome(string str,int s,int e){
    if(s>e){
        return true;
    }
    if(str[s]==str[e]){
       checkPalindrome(str,s+1,e-1);
        
    }
    else{
        return false;
    }
}


int main(){
    string str="rar";
    int s=0;
    int e=str.size();
    cout<<checkPalindrome(str,s,e)<<endl;
}