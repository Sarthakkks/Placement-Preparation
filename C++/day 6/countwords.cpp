#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    int count=1;
    cout<<"Enter the line to count words in : ";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            count++;
        }
    }
    cout<<"Words in line are : "<<count;
    return 0;
}