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

// bool checkPalindrome(string str,int s,int e){
//     //base case
//     if(s>=e){
//         return true;
//     }

//     if(str[s]!=str[e]){
//         return false;
//     }

//     return checkPalindrome(str,s+1,e-1);
// }


// int main(){
//     string str="rar";
//     int s=0;
//     int e=str.size()-1;
//     cout<<checkPalindrome(str,s,e)<<endl;
// }




//remove all occurances of a substring in given string

//leetcode 1910 question

// class Solution {
// public:
//     void recfun (string& s,string& part){
//         int found=s.find(part);
//         if(found!=string::npos){
//             string left=s.substr(0,found);
//             string rigth=s.substr(found+part.size(),s.size());
//             s=left+rigth;

//             recfun(s,part);
//         }
//         else{
//             return;
//         }

//     }

//     string removeOccurrences(string s, string part) {
//         recfun(s,part);
//         return s;
//     }
// };


//print all subarray of a given array using recursion

// void re(int arr[],int s,int n){
//     if(s>n){
//         return;
//     }
//     for(int i=0;i<=s;i++){
//         cout<<arr[i];
    
//     }
//     cout<<endl;
//     re(arr,s+1,n);
// }   

// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=5;
//     re(arr,0,size-1);
// }


