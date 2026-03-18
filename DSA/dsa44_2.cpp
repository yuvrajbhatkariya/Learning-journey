// Singly Linked List: -
#include <iostream>
using namespace std;
// Creating a new node: -
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        if(this->next != NULL){
            delete next;
            this -> next  = NULL;
        }
    }
};
// insert node from front or head: -
void insertAtHead(Node* &head,Node* &tail,int d){
    // empty codition: -
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
// Insert from Tail or end: -
void insertAtTail(Node* &head ,Node* &tail, int d){

    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
        return;
    }
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
// insert node at any point: -
void insertAtPosition(Node* &head,Node * &tail, int position,int d){
    Node* temp = head;
    int count = 1;

    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }

    while(count < position - 1){
        temp = temp->next;
        count++;
    }

    if(temp->next  == NULL){
        insertAtTail(head,tail,d);
        return;
    }
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;
    temp ->next = nodetoinsert;
}
// Deletion of Node: - 
void deleteNode(Node* &head, Node* &tail,int position){
    // if empty: -
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
        curr->next = NULL;
        delete curr;
    }
}
// display Linked list:-
void print(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp -> data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }
int main(){
    // create a initital node : -
    // Node* node1  = new Node(10);
    // Node* tail = node1;
    // Node* head = node1;

    // Linked list is empty: - 
    Node* head = NULL;
    Node* tail = NULL;

    // Insert form head: -

    print(head);
    insertAtHead(head,tail,12);
    print(head);
    insertAtHead(head,tail,46);
    print(head);


    // Insert from tail: - 

    insertAtTail(head,tail,89);
    print(head);
    insertAtTail(head,tail,69);
    print(head);

    // insertion at any positon : -
    // print(head);
    insertAtPosition(head,tail,2,90);
    print(head);
    insertAtPosition(head,tail,6,56);
    print(head);
    insertAtPosition(head,tail,1,90);
    print(head);

    cout<<"Head ---> "<<head ->data<<endl;
    cout<<"tail ---> "<<tail ->data<<endl;

    deleteNode(head,tail,1);
    print(head);

    cout<<"Head ---> "<<head ->data<<endl;
    cout<<"tail ---> "<<tail ->data<<endl;
    return 0;
}