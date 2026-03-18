//  Doubly Linked List : -
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data =  d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node(){
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};
// Insert a node from front: -
void insertHead(Node* &head,Node* &tail,int d){
    // if empty: -
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
// Insertion from Tail or endl : -
void insertTail(Node* &head,Node* &tail,int d){
    // if empty: 
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = new Node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}
// Insert Node at any position: -
void insertPosition(Node* &head,Node* &tail,int position,int d){
    // if empty:
    if(head == NULL || tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = head;
    // insert at 1 position:
    if(position == 1){
        insertHead(head,tail,d);
        return;
    }
    int count = 1;
    while(count < position -1){
        temp = temp->next;
        count++;
    }
    // inserting at last node:
    if(temp -> next == NULL){
        insertTail(head,tail,d);
        return;
    }
    Node* nodeinsert = new Node(d);
    nodeinsert-> next = temp ->next;
    temp->next->prev = nodeinsert;
    temp->next = nodeinsert;
    nodeinsert -> prev = temp;
}
// DELETION: -
void deleteNode(Node* &head, Node* &tail,int position){

    if(head == NULL ){
        cout<<"can not delete the element !"<<endl;
        return;
    }

    // deletion from front :
    if(position == 1){
        Node* temp = head;
        head =  head->next;
        temp-> next = NULL;
        delete temp;
    }
    else{
        // deletion from middile and last
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }  
        if(curr ->next == NULL){
            tail = prev;
        }
        prev->next = curr->next;
        // curr->next->prev = prev;
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }
}

// Display: -
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    // Node* head = NULL;
    // Node* tail = NULL;

    Node* node1 = new Node(19);
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertHead(head,tail,57);
    print(head);
    insertHead(head,tail,69);
    print(head);

    insertTail(head,tail,45);
    print(head);
    insertTail(head,tail,5);
    print(head);
     
    insertPosition(head,tail,3,55);
    print(head);
    insertPosition(head,tail,1,66);
    print(head);
    insertPosition(head,tail,8,100);
    print(head);

    cout<<head->data<<endl;
    cout<<tail ->data<<endl;

    deleteNode(head,tail,2);
    print(head);
    deleteNode(head,tail,1);
    print(head);
    deleteNode(head,tail,6);
    print(head);
    return 0;
}