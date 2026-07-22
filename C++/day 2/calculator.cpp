#include <iostream>
using namespace std;
int main(){
    // Menu-driven calculator
    int a,num1,num2;
    cout<<"Enter a choice from given:"<<endl<<"1:Addition"<<endl<<"2:Subtraction"<<endl<<"3:Multiplication"<<endl<<"4:Division"<<endl;
    cin>>a;
    switch(a){
        case 1:
            cout<<"Enter two numbers"<<endl;
            cin>>num1>>num2;
            cout<<"Addtion : "<<num1+num2;
            break;
        case 2:
            cout<<"Enter two numbers"<<endl;
            cin>>num1>>num2;
            cout<<"Subtraction : "<<num1-num2;
            break;
        case 3:
            cout<<"Enter two numbers"<<endl;
            cin>>num1>>num2;
            cout<<"Multiplication : "<<num1*num2;
            break;
        case 4:
            cout<<"Enter two numbers"<<endl;
            cin>>num1>>num2;
            if(num2=0){
                cout<<"Division with 0 at denominator is not possible";
            }
            else{
                cout<<"Division :"<<num1/num2;
            }
            break;
        default:
            cout<<"Enter a valid choice";
    }
    return 0;
}