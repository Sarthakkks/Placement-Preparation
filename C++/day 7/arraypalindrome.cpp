#include<iostream>
using namespace std;

bool palindrome(int arr[],int start,int end){
    if(start>=end){
        return 1;
    }
    if(arr[start]!=arr[end]){
        return 0;
    }
    
    return palindrome(arr,start+1,end-1);
}