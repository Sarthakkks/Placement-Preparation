#include <iostream>
using namespace std;

bool isSorted(int arr[],int size,int index){
    if(index==size-1){
        return true;
    }
    if(arr[index]>arr[index+1]){
        return false;
    }
    return isSorted(arr,size,index+1);
}