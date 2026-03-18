#include<iostream>
#include<queue>
using namespace std;
// Node creation: -
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
void buildfromlevelorder(node* &root){
    queue<node*> q;
    cout<<"Enter the root node : "<<endl;
    int data;   
    cin>>data;
    root = new node(data);  
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter the left node for : "<<temp ->data<<endl;
        int leftdata;
        cin>>leftdata;
        
        if(leftdata != -1){
            temp -> left = new node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter the right node for : "<<temp ->data<<endl;
        int rightdata;
        cin>>rightdata;
        
        if(rightdata != -1){
            temp -> right = new node(rightdata);
            q.push(temp->right);
        }
    }
}
int height(node* root){
        // code here
        if(root == NULL){
        return 0;
    }
    
    int h1 = height(root->left);
    int h2 = height(root->right);
    int ans = max(h1,h2) + 1;
    return ans;
}

int daimeter(node* root){
    if(root == NULL){
        return 0;
    }

    int d1 = daimeter(root->left);

    int d2 = daimeter(root->right);
    int d3 = height(root->left) + 1 + height(root->right);

    int ans = max(d3,max(d1,d2));
    return ans;
}
int main(){
    node* root = NULL;
    // 100 50 150 25 75 -1 160 -1 -1 60 -1 -1 170 -1 -1 -1 180 -1 -1 

    // 100 50 150 25 75 125 175 -1 -1 65 -1 -1 135 -1 180 -1 70 -1 -1 -1 200 -1 -1 -1 -1
    buildfromlevelorder(root);
    cout<<endl<<"================================"<<endl;
    cout<<"Height of tree : "<<height(root)<<endl;
    cout<<endl<<"================================"<<endl;
    cout<<"Daimetre of tree : "<<daimeter(root)<<endl;

    return 0;
}