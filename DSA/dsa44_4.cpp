// CIRCULAR LINKEDLIST: -
#include <iostream>
using namespace std;
class Node{
    public :
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};
// Insertion of element : -
// here we insert a node assuming that list having element  which we comare to given
// to given value than we insert that no. after that element 
void insertnode(Node* &tail, int element,int d){
    // if empty 
    if(tail == NULL){
        Node* temp = new Node(d);
        temp ->next =  temp;
        tail = temp;
        return;
    }
    // if nonempty : -
    // and isert a value after the value we give which assuming that it is present: -
    Node* curr = tail;
    while(curr->data != element){
        curr = curr->next;
    }

    Node* temp = new Node(d);
    temp -> next = curr ->next;
    curr -> next = temp;
}
// Deletion : -
void deletenode(Node* &tail,int element){
    Node* prev = tail;
    Node* curr = prev->next;
    // for empty list : -
    if(tail == NULL){
        cout<<"List is empty !"<<endl;
        return;
    }
    while(curr->data != element){
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    // for only one node: 
    if(curr == prev){
        tail = NULL;
    }
    // curr and tail are at same point: 
    else if(tail == curr){
        tail = prev;
    }
    curr->next = NULL;
    delete curr;
}
// Display: -
void print(Node* &tail){
    Node* temp = tail;
    if(tail == NULL){
        cout<<"List is empty ! "<<endl;
        return;
    }
    do{
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }while(temp != tail);
    cout<<endl;
}
int main(){
    // Node* tail = NULL;
    Node* node1 = new Node(2);
    node1-> next  = node1;
    Node* tail = node1;

    insertnode(tail,2,59);
    print(tail);
    insertnode(tail,59,50);
    print(tail);
    insertnode(tail,2,49);
    print(tail);
    insertnode(tail,59,90);
    print(tail);
   
    deletenode(tail,59);
    print(tail);
    deletenode(tail,90);
    print(tail);
    deletenode(tail,2);
    print(tail);
    return 0;
}