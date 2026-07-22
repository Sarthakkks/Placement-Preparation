#include <iostream>
using namespace std;

long long fact(int x){
    if(x<0){
        return 0;
    }
    long long result = 1;
    for(int i=1;i<=x;i++){
        result*=i;
    }
    return result;
}

int main(){
    int number=5;
    cout<<"Factorial of "<<number<<" is "<<fact(number)<<endl;
    return 0;
}