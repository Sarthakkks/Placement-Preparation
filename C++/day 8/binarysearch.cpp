#include <iostream>
using namespace std;

bool binarySearch(int arr[],int start,int end,int key){
    if(start>end){
        return 0;
    }
    int mid=start+(end-start)/2;
    if(key==arr[mid]){
        return 1;
    }
    else if(key>arr[mid]){
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
}