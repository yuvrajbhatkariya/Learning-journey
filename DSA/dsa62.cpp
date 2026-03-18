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

// 1. Level order traversal : 
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
             
            }
        }
        else{
            cout<<temp ->data<<" ";
            if(temp ->left){
                q.push(temp->left);

            }
            if(temp -> right){
                q.push(temp->right);
            }
        }
    }
}
// tree building: -
node* buildtree(node* root){
    cout<<"Enter the root node data : "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    
    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in  left node: "<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"Enter data for inserting in right node : "<<data<<endl;
    root->right = buildtree(root ->right);
    return root;
}


// 2. Inorder traversal: -
void inorder(node* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// 3. preorder traversal: -
void preorder(node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// 4. postorder traversal: -
void postorder(node* root){
    if(root == NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" "; 
}

// Level order Traversal: -
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
int main(){

    node* root = NULL;

    // 31 28 52 15 30 42 90 -1 -1 -1 -1 -1 -1 -1 -1
    buildfromlevelorder(root);
    cout<<endl;
    // levelOrderTraversal(root);


    // 31 42 64 -1 -1 75 -1 -1 53 86 -1 -1 -1
    // root = buildtree(root);
    cout<<"Printing level order traversal output : "<<endl;
    levelOrderTraversal(root);
    cout<<endl<<endl;
    cout<<"Printing inorder traversal outpu      : "<<endl;
    inorder(root);
    cout<<endl<<endl;
    cout<<"Printing preorder traversal output    : "<<endl;
    preorder(root);
    cout<<endl<<endl;
    cout<<"Printing postorder traversal output   : "<<endl;
    postorder(root);
    cout<<endl<<endl;

    return 0;
}