#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter any number"<<endl;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}