#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};

Node* nthNodeFromEnd(Node* head,int k){
    if(head==nullptr){
        return nullptr;
    }
    Node* slow=head;
    Node* fast=head;
    for(int i=0;i<k;i++){
        if(fast==nullptr){
            return nullptr;
        }
        fast=fast->next;
    }
    while(fast!=nullptr){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}