#include<iostream>
#include<stdio.h>
using namespace std;


struct Node
{
    int data;
    Node* next;
    Node(int new_data){
        data=new_data;
        next=nullptr;
    }
};

void printlist(Node* head){
    Node* temp=head;
    while (temp!=nullptr)
    {
        cout<<" "<<temp->data;
        temp=temp->next; 
    }
    cout<<endl;
    
}

Node* rev(Node* head){
    Node* temp=head;
    Node* newhead=new Node(head->data);
    temp=temp->next;
    while(temp!=nullptr){
        Node* neww=new Node(temp->data);
        neww->next=newhead;
        newhead=neww;
        temp=temp->next;
    }
    cout<<"after reversing"<<endl;
    printlist(newhead);
}

int main()
{
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    cout<<"before reversing"<<endl;
    printlist(head);
    rev(head);
    
 return 0;
}