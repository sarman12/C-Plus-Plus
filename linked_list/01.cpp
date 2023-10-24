// singly linked list(insert,delete)
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this-> data=data;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next != NULL){
            delete next;
            this->next=next;
        }
        cout<<"memory is  freeed"<<endl;
    }
};
void insertAThead(node* &head,int d){
    node* temp=new node(d);
    temp->next  = head;
    head=temp;
}
void insertattail(node* &tail,int l){
    node* temp=new node(l);
    tail->next = temp;
    tail=tail->next;

}
void insertinposition(node* &tail,node* &head,int position,int d){
    if(position==1){
        insertAThead(head,d);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt <position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp -> next == NULL ){
        insertattail(tail,d);
        return;
    }
    node* nodetoinsert=new node(d);
    nodetoinsert -> next= temp->next;
    temp -> next=nodetoinsert;
}
void deletenode(int position,node* &head){
    if(position==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node* crnt=head;
        node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=crnt;
            crnt=crnt-> next;
            cnt++;
        }
        prev -> next=crnt->next;
        crnt->next=NULL;
        delete crnt;
    }

}
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
  
    }
    cout<<endl;
}
int main(){
    node* node1=new node(10);
    // cout<< node1 -> data<<endl;
    // cout<< node1 -> next<<endl;
    node* head=node1;
    node* tail=node1;
    print(head);
    insertattail (tail,12);
    print(head);
    insertattail(tail,18);
    print(head);
    insertinposition (tail,head,4,30);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    deletenode(4,head);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
}