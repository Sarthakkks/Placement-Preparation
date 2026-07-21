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
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    head->next=second;
    second->next=third;
    Node* newNode=new Node(40);
    
    if(head==nullptr){
        head=newNode;
    }
    else{
        Node* temp=head;
        while(temp->next!=nullptr){
        temp=temp->next;
        }
        temp->next=newNode;
        temp=head;
    }
    
}