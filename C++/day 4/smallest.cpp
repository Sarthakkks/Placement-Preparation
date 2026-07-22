#include <iostream>
using namespace std;
int main(){
    int arr[5]={6,2,3,1,8};
    int length=sizeof(arr)/sizeof(arr[0]);
    int smallest=arr[0];
    for(int i=0;i<length;i++){
        if(arr[i]>=smallest){
            continue;
        }
        else{
            smallest=arr[i];
        }
    }
    cout<<"Smallest element is "<<smallest<<endl;
    return 0;
}