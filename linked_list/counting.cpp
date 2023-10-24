#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this-> next=NULL;
    }
};
void insert(node* &head,int d){
    node* crnt=new node(d);
    crnt -> next=head;
    head=crnt;

}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int count(node* &head,int n){
    int count=0;
    node* temp=head;
    while(temp != NULL){
        if(n==temp->data){
            
            count +=1;
        }
        temp = temp->next;
        
    }
    return count;
}
int main(){
    node* n1=new node(1);
    node* head=n1;
    insert(head,12);
    insert(head,1);
    insert(head,16);
    insert(head,1);
    insert(head,22);
    print(head);
    cout<<count(head,1)<<endl;
}