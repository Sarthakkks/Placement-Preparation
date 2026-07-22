// Check if a person is eligible to vote (age ≥ 18).
#include <iostream>
using namespace std;
void main(){
    int age;
    cout<<"Enter your Age"<<endl;
    cin>>age;
    if(age>=18){
        cout<<"Eligible";
    }
    else{
        cout<<"Not Eligible";
    }
}