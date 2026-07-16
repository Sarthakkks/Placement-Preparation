#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    int count=0;
    bool found=false;
    cout<<"Enter the string : ";
    cin>>str;
    for(int i=0;i<str.length();i++){
        count=0;
        for(int j=0;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==1){
            cout<<str[i];
            found=true;
            break;
        }
    }
    if(found==false){
        cout<<"No non-repeating Character";
    }
    return 0;
}