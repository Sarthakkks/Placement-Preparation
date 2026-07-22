// Check if a number is positive, negative, or zero.
#include <iostream>
using namespace std;
void main(){
    int num;
    cout<<"Enter the num to check"<<endl;
    cin>>num;
    if(num>0){
        cout<<"Positive"<<endl;
    }
    else if(num<0){
        cout<<"Negative"<<endl;
    }
    else{
        cout<<"Zero";
    }
}
