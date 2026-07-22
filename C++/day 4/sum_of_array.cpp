#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,6,8};
    int length=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<length;i++){
        sum+=arr[i];
    }
    cout<<"Sum of array :"<<sum<<endl;
    return 0;
}