#include <iostream>
using namespace std;
int main(){
    //declaring and initializing an array of size 5
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);      //for length or size of array

    //printing and traversing elements of array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[0]<<" ";      //first element
    cout<<arr[4]<<endl;           //last element
    arr[0]=5;               //updation
    cout<<"After update the first element is now: "<<arr[0];
    return 0;
}
