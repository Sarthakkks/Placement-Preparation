#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int temp=arr[0];
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}