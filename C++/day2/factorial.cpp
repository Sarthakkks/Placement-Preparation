#include <iostream>
using namespace std;
int main(){
    // Factorial
    long long n,factorial=1;
    cout<<"Enter a positive number"<<endl;
    cin>>n;
    if(n<0){
        cout<<"Error : Factorial of negative numbers doesnt exist";
    }
    else{
        for(int i=1;i<=n;i++){
            factorial*=i;
        }
        cout<<"Factorial of "<<n<<" is "<<factorial;
    }
    return 0;
}