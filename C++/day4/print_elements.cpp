#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,6,8};
    int length=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array : "<<endl;
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}