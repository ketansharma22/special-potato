#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int main(){
	int testcases;
	cout<<"Enter number of test cases"<<endl;
	cin>> testcases ;
	cout<<endl;
	int n;
	vector<int> arr;
	cout<<"enter number of integers0"<<endl;
	cin>>n;	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"je";
	for(int j=0;j<n;j++){
		cout<<arr[j];
	}
}