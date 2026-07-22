#include <iostream>
#include <string>
using namespace std;
int main(){
    string main,sub;
    bool found = false;
    cout<<"Enter the Main string and Substring : ";
    cin>>main>>sub;
    for(int i=0;i<=main.length()-sub.length();i++){
        found=true;
        for(int j=0;j<sub.length();j++){
            if(main[i + j] != sub[j]){
                found=false;
                break;
            }
        }
        if(found == true){
            break;
        }
    }
    if(found==true){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}