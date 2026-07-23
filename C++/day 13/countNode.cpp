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
    head->next=new Node(21);
    head->next->next=new Node(32);
    head->next->next->next=new Node(45);
    head->next->next->next->next=new Node(50);
    if(head==nullptr){
        cout<<"No nodes are there";
    }
    else{
    int count=0;
    Node*temp=head;
    while(temp!=nullptr){
        if(temp->data%2==0){
            cout<<temp->data<<" ";
            // count++;
        }
        temp=temp->next;
    }
    // cout<<"There are "<<count<<" node";
    }
    return 0;
}