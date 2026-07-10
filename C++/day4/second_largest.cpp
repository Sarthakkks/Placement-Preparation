#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,9,6,10,8};
    int length=sizeof(arr)/sizeof(arr[0]);
    int largest=arr[0];
    int second_largest=arr[0];
    for(int i=0;i<length;i++){
        if(largest<=arr[i]){
            largest=arr[i];
            cout<<largest<<endl;
        }
    }
    
    for(int i=0;i<length;i++){
        if(second_largest<=arr[i] && arr[i]!=largest){
                second_largest=arr[i];
        }
    }
    cout<<"Largest :"<<largest<<endl;
    cout<<"Second Largest : "<<second_largest<<endl;
    return 0;
}
