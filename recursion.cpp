#include <iostream>
#include <stdio.h>
#include <vector>
#include <limits.h>
using namespace std;


//min no of element to make up the given target
int  func(int target,vector<int>& arr){
    if(target==0)   return 0;

    if(target<0)    return INT_MAX;

    //recursive function
    int mini=INT_MAX;
    for(int i=0; i<sizeof(arr);i++){
        int ans=func(target-arr[i]+1,arr);
        mini=min(mini,ans);
    }
    return mini;
}
int main(){
    vector<int> arr{1,2,3};
    int target=5;
    int ans=func(target,arr);
    cout<<ans;
    
}