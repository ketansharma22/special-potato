#include<iostream>
#include<stdio.h>
using namespace std;

int partition(int arr[],int s, int e)
{
    //choose pivot element
    int pivotIndex=s;
    int pivot=arr[s];

    //step2: find right position for pivot Element and place it there
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
        
    }
     int rightIndex = s + count;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex=rightIndex;

      //Step3: check karo ki left me chote and right me bade h ki nahi
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot ){
            i++;
        }
        while(arr[j]>=pivot){
            j--;
        }


        //2 case ho sakte h -> 
        //A-> you found the elements to swap
        //B-> no need to swap
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;
      

}

void quickSort(int arr[], int s, int e)
{
    if(s>=e){
        return;
    }
    //partition function call
    int p=partition(arr,s,e);

    //recursive calls
  //pivot element -> left
  quickSort(arr, s, p-1);

  //pivot element -> right
  quickSort(arr, p+1, e);
}
int main()
{

    int arr[]={5,1,2,7,9,8,4,3,6};
    int n=9;
    int s=0;
    int e=n-1;
    quickSort(arr,s,e);
    for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

    return 0;
}