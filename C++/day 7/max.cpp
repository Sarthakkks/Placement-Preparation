#include <iostream>
using namespace std;

int max(int arr[],int n){
    if(n==1){
        return arr[0];
    }
    int remaining=max(arr+1,n-1);
    if(arr[0]>remaining){
        return arr[0];
    }
    else{
        return remaining;
    }
}

int main(){
    int arr[]={5,2,8,11,3,1};
    cout<<max(arr,6);
    return 0;
}