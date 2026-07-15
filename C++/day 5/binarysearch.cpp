#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,7,9,11,13,15,17};
    int size=sizeof(arr)/sizeof(arr[0]);
    int low=0,high=size-1,search;
    bool found=false;
    cout<<"Enter the number you want to search : ";
    cin>>search;
    while(low<=high){
        int mid=(high+low)/2;
        if(search==arr[mid]){
        cout<<search<<" found at "<<mid;
        found=true;
        break;
        }
        else if(search>arr[mid]){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    if(found==false){
        cout<<"Not found";
    }
    return 0;
}