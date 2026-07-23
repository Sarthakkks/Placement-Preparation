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

bool detectCycle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
// int main(){
//     Node* head=new Node(10);
//     head->next=new Node(20);
//     head->next->next=new Node(30);
//     head->next->next->next=new Node(40);
//     head->next->next->next->next=new Node(50);

//     return 0;
// }