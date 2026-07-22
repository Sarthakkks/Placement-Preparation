#include <iostream>
using namespace std;

void greet(){               //Function without parameters (No parameter,No return Value)
    cout<<"Welcome to C++"<<endl;
}

int square(int x){          //Square Function (parameter and return value)
    return x*x;
}

int multiply(int x,int y){      //Arguments or Formal Parameters (Parameter and return value)
    return x*y;
}

void add(){                     //Void Function
    greet();
}

int main(){
    greet();
    int result=square(5);       //Function calling
    cout<<"5 times 3 is "<<multiply(5,3)<<endl;     //Actual Parameters
    cout<<"The square of 5 is "<<result<<endl;
    add();

    return 0;
}