#include <iostream>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    int len1=mid-start+1;
    int len2=end-mid;
    int* left=new int[len1];
    int *right=new int[len2];
    int mainArrayIndex=start;
    for(int i=0;i<len1;i++){
        left[i]=arr[mainArrayIndex];
        mainArrayIndex++;
    }
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[mainArrayIndex];
        mainArrayIndex++;
    }
    int index1=0;
    int index2=0;
    mainArrayIndex=start;
    while(index1<len1 && index2<len2){
        if(left[index1]<=right[index2]){
            arr[mainArrayIndex]=left[index1];
            index1++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex]=right[index2];
            index2++;
            mainArrayIndex++;
        }
    }
    while(index1<len1){
        arr[mainArrayIndex]=left[index1];
        index1++;
        mainArrayIndex++;
    }
    while(index2<len2){
        arr[mainArrayIndex]=right[index2];
        index2++;
        mainArrayIndex++;
    }
    delete [] left;
    delete [] right;
}

void mergesort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main()
{
    int arr[] = {8,3,5,4,7,6,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, n - 1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}