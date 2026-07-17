#include <iostream>
using namespace std;

bool search(int arr[],int n,int key){
    if(n==0){
        return 0;
    }
    if(key==arr[0]){
        return 1;
    }
    else{
        return search(arr+1,n-1,key);
    }
}