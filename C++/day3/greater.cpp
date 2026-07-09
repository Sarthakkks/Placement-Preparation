#include <iostream>
using namespace std;

int great(int x,int y,int z){
    if(x>=y && x>=z){
        return x;
    }
    else if(y>=x && y>=z){
        return y;
    }
    else{
        return z;
    }
}

int main(){
    cout<<great(4,6,5)<<" is greater"<<endl;
    return 0;
}