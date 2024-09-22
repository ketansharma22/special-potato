#include<iostream>
#include<stdio.h>
using namespace std;


//initializing and printing of a linked list

// struct Node
// {
//     int data;
//     Node* next;
    
//     Node(int new_data){
//         data = new_data;
//         next =nullptr;
//     }
// };


// void printlist(Node* head){
//     Node* temp=head;
//     while(temp!=nullptr){
//         cout<<" "<<temp->data;
//         temp=temp->next;
//     }
//     cout<<endl;
// }


// int main()
// {
//     Node* head=new Node(1);
//     head->next=new Node(2);
//     head->next->next=new Node(3);

//     printlist(head);
//  return 0;
// }



//...........

//inserting in a linked list at begening,somewhere in middle and at last!!


struct Node
{
    int data;
    Node* next;

    Node(int new_data){
        data=new_data;
        next=nullptr;
    }
};

Node* insertLast(Node* head,int new_data){
    Node* new_node=new Node(new_data);
    if(head==nullptr){
        return new_node;
    }
    Node* last=head;
    while(last->next!=nullptr){
        last=last->next;
    }
    last->next=new_node;

    return new_node;
}

Node* insertBetween(Node* head,int new_data,int index){
    Node* new_node=new Node(new_data);
    if(index==1){
        new_node->next=head;
        head=new_node;
        return head;
    }
    Node* temp=head;
    for(int i=1;i<index-1&&temp!=nullptr;i++){
        temp=temp->next;
    }

     if (temp == nullptr) {
        cout << "Position is out of bounds." << endl;
      
        // Deallocate memory to prevent
        delete new_node; 
                       
        return head;
    }

    new_node->next=temp->next;
    temp->next=new_node;
    return head;
}


void printlist(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<" "<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    Node* head=new Node(10);
    head->next=new Node(20);

    //inserting at begining of linked list
    Node* temp=new Node(5);//
    temp->next=head;//
    head=temp;//

    
    //inserting at last in linked list
    insertLast(head,2);
    

    //insterting in between somewhere
    insertBetween(head,13,1);
    printlist(head);

return 0;
}