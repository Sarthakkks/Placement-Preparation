#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums={10,20,30};
    nums.clear();
    cout<<nums.capacity()<<endl;
    cout<<nums.empty()<<endl;
    nums.push_back(10);
    cout<<nums.capacity()<<endl;
    nums.push_back(20);
    nums.push_back(30);
    cout<<nums.capacity()<<endl;
    cout<<nums.empty()<<endl;
    cout<<nums.front()<<endl;
    cout<<nums.back()<<endl;
    cout<<nums.size()<<endl;
    nums.resize(5);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    nums.pop_back();
    cout<<nums.size();
    return 0;
}