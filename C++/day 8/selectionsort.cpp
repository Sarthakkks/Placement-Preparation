#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[],int n,int index){
    if(index==n-1){
        return;
    }
    int minIndex=index;
    for(int i=index+1;i<n;i++){
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
    }
    swap(arr[index],arr[minIndex]);
    selectionSort(arr,n,index+1);
}