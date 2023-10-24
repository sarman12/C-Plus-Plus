// doubly linked list 
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(next!= NULL){
            delete next;
            next=NULL;
        }
        cout<<"memeory is free->"<<value<<endl;
    }
};
void print(node* head){
    node* temp=head;
    while (temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
// length of the kinked-list
int getlen(node* head){
    int len=0;
    node* temp=head;
    while (temp!= NULL){
        len++;
        temp=temp->next;
    }
    cout<<len<<endl;;

}

void insertathead(node* & tail,node* &head,int d){
    if(head==NULL){
        node* temp= new node(d);
        head=temp;
        tail=temp;
    }
    
else{
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

}
void insertattail(node* &tail,node* & head,int d){
    if(tail==NULL){
        node* temp= new node(d);
        tail=temp;
        head=temp;
    }
    else{
    node* temp=new node(d);
    temp->prev=tail;
    tail-> next=temp;
    tail=temp;
    }
}
void insertinposition(node* &tail,node* &head,int position,int d){
    if(position==1){
        insertathead(tail,head,d);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt <position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp -> next == NULL ){
        insertattail(tail,head,d);
        return;
    }
    node* newone=new node(d);
    newone->next=temp->next;
    temp->next->prev=newone;
    temp->next=newone;
    newone->prev=temp;
}
void deletenode(int position,node* &head){
    if(position==1){
        node* temp=head;
        temp-> next->prev=NULL;
        head=temp->next;
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
        crnt->prev=NULL;
        prev->next=crnt->next;
        crnt->next=NULL;
        delete crnt;
    }
}
int main(){
    // node* n1=new node(100);
    node* head=NULL;
    node* tail=NULL;
    print(head);
    cout<<getlen(head)<<endl;
    getlen(head);
    insertathead(tail,head,101);
    print(head);
    getlen(head);
    insertathead(tail,head,110);
    print(head);
    getlen(head);
    insertathead(tail,head,111);
    print(head);
    getlen(head);
    insertattail(tail,head,10);
    print(head);
    getlen(head);
    insertattail(tail,head,11);
    print(head);
    getlen(head);
    insertattail(tail,head,01);
    print(head);
    getlen(head);
    insertinposition(tail,head,4,111111);
    print(head);
    getlen(head);
    insertinposition(tail,head,5,1100001);
    print(head);
    getlen(head);
    deletenode(1,head);
    print(head);
    getlen(head);
    deletenode(2,head);
    print(head);
    getlen(head);
    deletenode(3,head);
    print(head);
    getlen(head);
    deletenode(5,head);
    print(head);
    getlen(head);
}
