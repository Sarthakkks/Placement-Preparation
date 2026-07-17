#include <iostream>
using namespace std;

int firstOccurence(int arr[],int n,int key,int index){
    if(n==0){
        return -1;
    }
    if(arr[0]==key){
        return index;
    }
    return firstOccurence(arr+1,n-1,key,index+1);
}