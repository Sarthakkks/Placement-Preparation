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
        cout<<"No elements are there";
    }
    else if(head->next==nullptr){
        delete head;
        head=nullptr;
    }
    else{
        Node* prev=nullptr;
        Node* curr=head;
        while(curr->next!=nullptr){
            prev=curr;
            curr=curr->next;
        }
        prev->next=nullptr;
        delete curr;
        curr=nullptr;
    }

    return 0;
}