#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string :";
    getline(cin,str);
    int length=str.length();
    for(int i=0;i<length;i++){
        if(str[i]==' '){
            for(int j=i;j<length-1;j++){
                str[j]=str[j+1];
            }
            length--;
        }
    }
    str.resize(length);
    cout<<str;
    return 0;
}