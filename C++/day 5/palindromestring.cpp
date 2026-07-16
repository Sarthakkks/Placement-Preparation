#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    bool state=true;
    cout<<"Enter the string to check palindrome in : ";
    cin>>str;
    int length=str.length()-1;
    for(int i=0;i<str.length();i++){
        if(str[i]!=str[length]){
            state=false;
            break;
        }
        else{
            length--;
        }
    }
    if(state==true){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}
//gotta finish