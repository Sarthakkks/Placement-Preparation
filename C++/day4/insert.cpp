#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,4,5};
    int length=4;
    int position,number;
    cout<<"Enter index and number to enter inside the array";
    cin>>position>>number;
    for(int i=length;i>=0;i--){
        if(i>position){
            arr[i]=arr[i-1];
        }
    }
    arr[position] = number;
    length++;
    
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}