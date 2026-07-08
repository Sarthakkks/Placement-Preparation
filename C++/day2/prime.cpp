#include <iostream>
using namespace std;
int main(){
    // Prime check
    int n,cnt=0;
    cout<<"Enter the number to check prime"<<endl;
    cin>>n;
    if(n<=1){
            cout<<n<<" is not a prime number";
    }
    else{
        for(int i=1;i<=n;i++){
            if(n%i==0){
                cnt++;
            }
        }
        if(cnt>2){
            cout<<n<<" is not a prime number";
        }
        else{
            cout<<n<<" is a Prime Number";
        }
    }
    return 0;
}
