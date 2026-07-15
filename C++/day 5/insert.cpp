#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,4,5};
    int size = 4;
    int position,number;
    cout<<"Enter the number and position to be inserted at"<<endl;
    cin>>number>>position;
    for(int i=size;i>=0;i--){
        if(i>position){
            arr[i]=arr[i-1];
        }
    }
    arr[position]=number;
    size++;
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}