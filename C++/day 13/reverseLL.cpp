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
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    if(head==nullptr){
        cout<<"No elements";
    }
    else{
        Node* prev=nullptr;
        Node* curr=head;
        Node* next=nullptr;
        while(curr!=nullptr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
    }
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}