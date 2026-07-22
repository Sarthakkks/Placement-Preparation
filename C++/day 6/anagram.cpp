#include <iostream>
#include <string>
using namespace std;
int main(){
    string str,str1;
    bool flag=false;
    cout<<"Enter two strings to check anagram : ";
    cin>>str>>str1;
    if(str.length()==str1.length()){
        for(int i=0;i<str.length();i++){
            flag=false;
            for(int j=0;j<str1.length();j++){
                if(str[i]==str1[j]){
                    flag=true;
                    str1[j]='#';
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(!flag){
            cout<<"Anagram";
        }
        else{
            cout<<"Not Anagram";
        }
    }
    else{
    cout<<"Not Anagram";
    }
    return 0;
}