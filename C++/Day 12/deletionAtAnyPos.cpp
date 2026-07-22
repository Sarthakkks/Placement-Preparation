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
        cout<<"No elements are there ";
    }
    else if(head->next==nullptr){
        delete head;
        head=nullptr;
    }
    else{
        Node* prev=nullptr;
        Node* curr=head;
        int pos,count=1;
        cout<<"Enter position to delete the element of ";
        cin>>pos;
        if(pos<=0){
            cout<<"Invalid Position";
        }
        else{
            if(pos==1){
                Node*temp=head;
                head=head->next;
                delete temp;
            }
            else{
                while(count<pos && curr->next!=nullptr){
                    count++;
                    prev=curr;
                    curr=curr->next;
                }
                if(count!=pos){
                    cout<<"Invalid position";
                }
                else{
                    prev->next=curr->next;
                    delete curr;
                    curr=nullptr;
                    cout<<"Element deleted";
                }
            }
        }
    }
    return 0;
}