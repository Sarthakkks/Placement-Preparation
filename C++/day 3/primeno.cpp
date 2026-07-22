#include <iostream>
using namespace std;

void isprime(int x){
    int count=0;
    if(x<=1){
        cout<<x<<" is Not Prime";
    }
    else{
        for(int i=1;i<=x;i++){
            if(x%i==0){
                count++;
            }
        }
        if(count==2){
            cout<<x<<" is prime";
        }
        else{
            cout<<x<<" is not prime";
        }
    }
}


int main(){
    int num;
    cout<<"Enter the positive number to check"<<endl;
    cin>>num;
    isprime(num);
    return 0;
}