#include <iostream>
using namespace std;
int main(){
    int *p=new int;
    *p=10;
    delete p;
    cout<<*p<<endl;       //dangling pointer
    p=nullptr;      //in order to remove dangling ptr we use nullptr
    if(p!=nullptr){     //for common safe practice.
        cout<<*p;
    }
    cout<<p;
    return 0;
}