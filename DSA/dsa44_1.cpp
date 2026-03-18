// Linked List : -

// Node Creation: -
#include<iostream>

using namespace std;
class node{
    public :
        int data;
        node* next;
    
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    
};
int main(){
    
    node* node1 = new node(34);
    node* node2 = new node(55);
    cout<<endl<<endl;
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;
    cout<<endl<<endl;
    cout<<node2 -> data<<endl;
    cout<<node2 -> next<<endl;

    delete node1;
    delete node2;

    cout<<node1 -> data<<endl;
    cout<<node2 -> data<<endl;

    return 0;

}
