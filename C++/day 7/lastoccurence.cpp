#include <iostream>
using namespace std;

int lastOccurence(int arr[],int n,int key){
    if(n==0){
        return -1;
    }
    if(arr[n-1]!=key){
        return lastOccurence(arr,n-1,key);
    }
    return n-1;
}