#include <iostream>
using namespace std;

void alloccurence(int arr[],int size,int index,int key){
    if(index==size){
        return;
    }
    if(arr[index]==key){
        cout<<index<<" ";
    }
    alloccurence(arr,size,index+1,key);
}