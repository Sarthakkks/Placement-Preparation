#include <iostream>
using namespace std;

void rev(int arr[],int start,int end){
    if(start>= end){
        return;
    }
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    rev(arr,start+1,end-1);
}