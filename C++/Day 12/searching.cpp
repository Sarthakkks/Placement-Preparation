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
    int search;
    cout<<"Enter the element to search : ";
    cin>>search;
    if(head==nullptr){
        cout<<"No elements are there ";
    }
    else{
        int count=1;
        Node* temp=head;
        while(temp!=nullptr){
            if(temp->data==search){
                cout<<"Element found at position "<<count<<endl;
                break;
            }
            temp=temp->next;
            count++;
        }
        if(temp==nullptr){
            cout<<"Element not Found";
        }
    }
    return 0;
}