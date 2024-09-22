#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int arr[]={1,0,2,3,0,4,5};
    int target;
    cin>>target;

    for(int i=0;i<sizeof(arr);i++){
        if(arr[i]==target){
            cout<<"present at index"<<i;
            break;
        }
        else{
            cout<<"-1";
            return -1;
        }
    }

 return 0;
}