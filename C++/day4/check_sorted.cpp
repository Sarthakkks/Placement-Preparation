#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    int current,next,count=0;
    for(int i=0;i<length-1;i++){
        current=arr[i];
        next=arr[i+1];
        if(next>=current){
            count++;
        }
        else{
            break;
        }
    }
    if(count==length-1){
        cout<<"Sorted";
    }
    else{
        cout<<"Not sorted";
    }
    return 0;
}