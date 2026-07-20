#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int value){
            data=value;
            next=nullptr;
        }
};

int main(){
    Node* first=new Node(10);
    Node* second=new Node(20);
    first->next=second;
    cout<<first->next->data;
    return 0;
}