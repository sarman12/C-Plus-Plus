#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};
node* bulidtree(node* root){
    int data;
    cout<<"Enter the data->"<<endl;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the data for left node->"<<endl;
    root->left=bulidtree(root->left);
    cout<<"Enter the data for right node->"<<endl;
    root->right=bulidtree(root->right);
    return root;

}
void levelorder(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
// inorder --->>> left -> print(node) -> right;
void inorder(node* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
// preorder --->>> print (node)-> left ->right;
void preorder(node* root){
    if(root == NULL){
        return ;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}
// postorder --->>> left ->right ->print(node);
void postorder(node* root){
    if(root == NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}
// tree creation by levelorder
void creationbylevelorder(node* &root){
    queue<node*> q;
    
    int data;
    cout<<"Enter your data for root- > "<<endl;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
        
        node* temp=q.front();
        q.pop();
        int leftnode;
        cout<<"Enter your data for left node-> " <<temp->data<<endl;
        cin>>leftnode;
        if(leftnode != -1){
            temp->left=new node(leftnode);
            q.push(temp->left);
        }
        
        int rightnode;
        cout<<"Enter your data for right node-> " <<temp->data<<endl;
        cin>>rightnode;
        if(rightnode != -1){
            temp->right=new node(rightnode);
            q.push(temp->right);
        }
    }
}

// void reverselevelorder(node* root){
//     queue<node* > q;
//     q.push()
// }
int main(){
    node* root=NULL;
    // root=bulidtree(root);
    creationbylevelorder(root);
    levelorder(root);
    cout<<"IN order traversal->" ;
    inorder(root);
    cout<<endl;
    cout<<"Pre order traversal->" ;
    preorder(root);
    cout<<endl;
    cout<<"Post order traversal->" ;
    postorder(root);
    return 0;
}