#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    cout<<endl;
    int a,b;
    cin>>a>>b;
    int n=a+b;
    for(int i=0;i<n;i++){
        if(a%=2 ==0 && b==0){
            cout<<"Yes";
            break;
        }
        if(b%=2 ==0 && a==0){
            cout<<"Yes";
            break;
        }
        if(a%2==0 && b%2==0){
            cout<<"Yes";
            break;
        }
        

    }
    
}