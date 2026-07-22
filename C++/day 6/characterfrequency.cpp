#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    char input;
    int count=0;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<"Enter the character to check frequency of : ";
    cin>>input;
    for(int i=0;i<str.length();i++){
        if(str[i]==input){
            count++;
        }
    }
    cout<<"The frequency of "<<input<<" is "<<count;
    return 0;
}