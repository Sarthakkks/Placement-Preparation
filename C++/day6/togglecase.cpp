#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string to toggle : ";
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<"Output : "<<str;
    return 0;
}