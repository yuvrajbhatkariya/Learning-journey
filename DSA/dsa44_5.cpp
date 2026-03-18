// Doubly circular linked list: -
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        this-> data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
    }
};
// Insertion of NODE : -
void insert(Node* &tail,int value , int d){
    // add first Node: -
    if(tail == NULL){
        Node* temp = new Node(d);
        temp ->next = temp;
        temp ->prev = temp;
        tail = temp;
        return;
    }
    // assume value is present in list and we
    //  add node after that value: -
    Node* curr = tail;
    while(curr ->data != value){
        curr = curr->next;
    }
    Node* temp = new Node(d);
    temp -> next = curr ->next;
    curr -> next -> prev = temp;
    curr -> next = temp;
    temp -> prev = curr;
}
// DELETION: -
void deletion(Node* &tail, int value){
    // if emptt :
    if(tail == NULL){
        cout<<"List is empty !"<<endl;
        return;
    }
    // if not;
    Node* prev = tail;
    Node* curr = prev ->next;
    while(curr ->data != value){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    // check if only one node is there 
    if(curr == prev){
        tail = NULL;
    }
    // delete last node or tail node : -
    else if(curr == tail){
        tail = prev;
    }
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}
// Display : -
void print(Node* &tail){
    // if empty:
    if(tail == NULL){
        cout<<"List is empty !"<<endl;
        return;
    }

    // if not:
    Node* temp = tail;
    do{
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }while(temp != tail);
    cout<<endl;
}
int main(){
    Node* node1 = new Node(1);
    node1 -> next = node1;
    node1 -> prev = node1;
    Node* tail = node1;
    print(tail);
    insert(tail,1,45);
    print(tail);
    insert(tail,45,4);
    print(tail);
    insert(tail,45,100);
    print(tail);
    deletion(tail,4);
    print(tail);
    deletion(tail,1);
    print(tail);
    deletion(tail,100);
    print(tail);
    return 0;
}