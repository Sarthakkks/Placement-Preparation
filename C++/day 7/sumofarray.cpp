#include <iostream>
using namespace std;

int sum(int arr[],int n){           //from back array access like arr[5]-->arr[4]
    if(n==0){
        return 0;
    }
    return arr[n]+sum(arr,n-1);
}

int sum1(int arr[],int n){          //from front array access using pointer like arr[1]-->arr[2]
    if(n==0){
        return 0;
    }
    return arr[0]+sum(arr+1,n-1);       //arr+1 acts as a pointer
}

int main(){
    int arr[]={2,4,6,8,10};
    cout<<sum(arr,5)<<endl;
    cout<<sum1(arr,5);
    return 0;
}