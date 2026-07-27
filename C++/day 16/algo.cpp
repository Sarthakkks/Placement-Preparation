#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v={5,3,8,1,9};
    sort(v.begin(),v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}