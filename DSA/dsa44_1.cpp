// // Linked List : -

// // Node Creation: -
// #include<iostream>

// using namespace std;
// class node{
//     public :
//         int data;
//         node* next;
    
//     node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }

    
// };
// int main(){
    
//     node* node1 = new node(34);
//     node* node2 = new node(55);
//     cout<<endl<<endl;
//     cout<<node1 -> data<<endl;
//     cout<<node1 -> next<<endl;
//     cout<<endl<<endl;
//     cout<<node2 -> data<<endl;
//     cout<<node2 -> next<<endl;

//     delete node1;
//     delete node2;

//     cout<<node1 -> data<<endl;
//     cout<<node2 -> data<<endl;

//     return 0;

// }




# include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // ~Node(){
    //     int value = this->data;

    //     if(this->next != NULL){
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout<<"Memory is free for the node : "<<value<<endl;
    // }

    ~Node(){
        cout<<"Memory is free for the node : "<<data<<endl;
    }

};
void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head,Node* & tail,int Position,int data){
    if(Position == 1){
        insertAtHead(head,data);
        return ;
    }
    Node* temp = head;
    int count = 1;
    while(count<Position-1){
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL ){
        insertAtTail(tail,data);
        return ;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    
}
void deleteNode(Node* &head,Node* &tail,int position){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        // temp->next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        if(curr->next == NULL){
            tail = prev;
        }
        prev->next = curr->next;
        // curr->next = NULL;
        delete curr;
    }
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    // Node* node1 = new Node(1000);
    // cout<<endl<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head,30);
    print(head);
    insertAtTail(tail,40);
    print(head);
    insertAtHead(head,50);
    print(head);
    insertAtTail(tail,60);
    print(head);
    insertAtPosition(head,tail,3,20);
    print(head);
    insertAtPosition(head,tail,1,70);
    print(head);
    insertAtPosition(head,tail,8,80);
    print(head);

    deleteNode(head,tail,3);
    print(head);
    deleteNode(head,tail,1);
    print(head);
    deleteNode(head,tail,6);
    print(head);

    cout<<endl;
    cout<<"Head -> "<<head->data<<endl;
    cout<<"Tail -> "<<tail->data<<endl;

    return 0;
}

