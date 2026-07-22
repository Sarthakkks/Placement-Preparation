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
    if(head==nullptr){
        cout<<"No elements present";
    }
    else{
        Node*before=head;
        cout<<"Before : ";
        while(before!=nullptr){
            cout<<before->data<<" ";
            before=before->next;
        }
        cout<<endl<<"After : ";
        Node*temp=head;
        head=head->next;
        delete temp;
        Node*after=head;
        while(after!=nullptr){
            cout<<after->data<<" ";
            after=after->next;
        }
    }
    return 0;
}