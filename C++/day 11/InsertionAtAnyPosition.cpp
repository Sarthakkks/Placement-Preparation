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
    int pos=1;
    Node* newNode=new Node(5);
    if(head==nullptr){
        head=newNode;
    }
    else{
        if(pos==1){
            newNode->next=head;
            head=newNode;
        }
        else{
            Node* temp=head;
            int count=1;
            while(count<pos-1 && temp->next!=nullptr){
                temp=temp->next;
                count++;
            }
            if(count!=pos-1){
                cout<<"Invalid Position";
            }
            else{
                newNode->next=temp->next;
                temp->next=newNode;
            }
        }
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

}