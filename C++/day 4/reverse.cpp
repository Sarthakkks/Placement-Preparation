#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};                  //better
    for(int i=4;i>-1;i--){
        cout<<arr[i]<<" ";
    }

    // int arr[5]={1,2,3,4,5};
    // int arr1[5]={};
    // int length=sizeof(arr)/sizeof(arr[0]);
    // arr1[0]=arr[4];
    // arr1[1]=arr[3];
    // arr1[2]=arr[2];
    // arr1[3]=arr[1];
    // arr1[4]=arr[0];
    // for(int i=0;i<length;i++){
    //     cout<<arr1[i]<<" ";
    // }

    return 0;
}