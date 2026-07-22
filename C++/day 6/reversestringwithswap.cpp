#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    char temp;
    cout<<"Enter the string : ";
    cin>>str;
    int length=str.length()-1;
    cout<<str<<endl;
    for(int i=0;i<str.length()/2;i++){
        temp=str[i];
        str[i]=str[length];
        str[length]=temp;
        length--;
    }
    cout<<str<<endl;
    return 0;
}