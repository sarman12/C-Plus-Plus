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
node* insertintobst(node* root,int d){
    if(root==NULL){
        root=new node(d);
        return root;
    }
    if(d>root->data){
        root->right=insertintobst(root->right,d);
    }
    else if(d<root->data){
        root->left=insertintobst(root->left,d);
    }
    return root;
}
void forinput(node* &root){
    
    int data;
    cin>>data;
    while(data != -1){
        root=insertintobst(root,data);
        cin>>data;
    }
    
}
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
node* deletion(node* root,int k){
    if(root==NULL){
        return root;
    }
    if(root->data==k){
        if(root->left==NULL && root->right==NULL){
            delete root;return NULL;
        }
        if(root->left != NULL && root->right == NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right == NULL){
            int min=minval(root->left)->data;
            root->data=mini;
            root->right=deletion(root->right,mini);return root;
        }

    }
    else if(root->data>k){
        root->left=deletion(root->left,k);
        return root;
    }
    else{
        root->right=deletion(root->right,k);
        return root;
    }
}
int main(){
    node* root=NULL;
    cout<<"Enter data to create BST-> "<<endl;
    forinput(root);
    cout<<"IN order traversal->" ;
    inorder(root);
    cout<<endl;
    cout<<"Pre order traversal->" ;
    preorder(root);
    cout<<endl;
    cout<<"Post order traversal->" ;
    postorder(root);
    


}