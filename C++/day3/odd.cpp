#include <iostream>
using namespace std;

void odd_even(int x){
    if(x%2==0){
        cout<<x<<" Number is Even "<<endl;
    }
    else{
        cout<<x<<" Number is odd"<<endl;
    }
}

int main(){
    odd_even(23);
    return 0;
}
