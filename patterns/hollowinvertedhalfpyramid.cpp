#include <stdio.h>
#include <iostream>
using namespace std;
// for n=6
//  ******
//  *   *
//  *  *
//  * *
//  **
//  *

int main()
{
    int n;
    cout << "enter any number" << endl;
    cin >> n;
    cout << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 ){
                cout<<"*";
            }
            else if(j==n-1-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
        
}