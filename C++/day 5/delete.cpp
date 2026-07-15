#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5};
    int size = 5;
    int position;
    cout<<"Enter the index where you want to delete : ";
    cin>>position;
    for(int i=position;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}