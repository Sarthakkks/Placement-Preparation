#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums;
    int x;
    for(int i=0;i<5;i++){
        cout<<"Enter the number : ";
        cin>>x;
        nums.push_back(x);
    }
    for(int x:nums){
        cout<<x<<" ";
    }
    return 0;
}