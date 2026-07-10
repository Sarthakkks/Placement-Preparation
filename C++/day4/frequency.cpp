#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4,5,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    int temp,frequency=0;
    cout<<"Enter the number : "<<endl;
    cin>>temp;
    for(int i=0;i<length;i++){
        if(temp==arr[i]){
            frequency++;
        }
    }
    cout<<"Frequency of "<<temp<<" is "<<frequency<<endl;
    return 0;
}