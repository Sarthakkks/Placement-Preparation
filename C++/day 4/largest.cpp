#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,6,8};
    int length=sizeof(arr)/sizeof(arr[0]);
    int largest=arr[0];
    for(int i=0;i<length;i++){
        if(largest>=arr[i]){
            continue;
        }
        else{
            largest=arr[i];
        }
    }
    cout<<"Largest element is "<<largest<<endl;
    return 0;
}