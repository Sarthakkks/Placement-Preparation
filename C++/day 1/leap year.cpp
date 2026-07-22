// Check if a year is a leap year (challenge).
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year"<<endl;
    cin>>year;
    if(year%400==0){
        cout<<year<<" is leap year";
    }
    else if(year%100==0){
        cout<<year<<" not leap year";
    }
    else if(year%4==0){
        cout<<year<<" leap year";
    }
    else{
        cout<<year<<" not leap year";
    }
    return 0;
}