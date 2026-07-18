#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    if(n==1){
        return;
    }
    int temp;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    bubbleSort(arr,n-1);
}