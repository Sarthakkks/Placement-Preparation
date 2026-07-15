#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int vowel=0,consonant=0;
    cout<<"Enter the string to check vowels & consonants in ";
    cin>>str;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel++;
        }
        else{
            consonant++;
        }
    }
    cout<<str<<" has "<<vowel<<" vowels & "<<consonant<<" consonants";
    return 0;
}