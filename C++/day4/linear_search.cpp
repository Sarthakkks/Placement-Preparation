#include <iostream>
using namespace std;
int main(){
    int arr[6] = {5, 8, 2, 10, 4, 7};
    int length=sizeof(arr)/sizeof(arr[0]);
    int temp,count=0;
    cout<<"Enter a number you want to search"<<endl;
    cin>>temp;
    for(int i=0;i<length;i++){
        if(arr[i]==temp){
            cout<<temp<<" found at "<<i<<" Index"<<endl;
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"Not found";
    }
    return 0;
}