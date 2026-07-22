#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    int even=0,odd=0;
    for(int i=0;i<length;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even : "<<even<<endl;
    cout<<"Odd : "<<odd<<endl;
    return 0;
}