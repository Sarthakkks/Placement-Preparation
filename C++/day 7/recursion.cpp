#include <iostream>
using namespace std;

void print_numbers(int n){
    if(n==0){
        return;
    }
    print_numbers(n-1);             //for 1 to 5 cout neeche
    cout<<n<<endl;
    
}
void print_number(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;                  //for 5 to 1 cout upar
    print_number(n-1);
}

int main(){
    print_numbers(5);
    print_number(5);
    return 0;
}