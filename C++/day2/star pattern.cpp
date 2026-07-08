#include <iostream>
using namespace std;
int main(){
    //forward pattern
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //backward pattern
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //same at all
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //number ones
    for(int i=1;i<=5;i++){
        for(int j=1;j<i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
    //right indexed
    for(int i=1;i<=5;i++){
        for(int j=5;j>i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //reverse right indexed
    for(int i=5;i>=1;i--){
        for(int j=5;j>i;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    //pyramid from center
    for(int i=1;i<=5;i++){
        for(int j=5;j>i;j--){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}