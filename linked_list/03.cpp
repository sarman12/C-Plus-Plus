// circular linked-list
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~node(){
        int value=this->data;
        if(this->next!= NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free->"<<value<<endl;
    }
};
void print(node* tail){
    node* temp=tail;
    if(tail==NULL){
        cout<<"list is empty vro"<<endl;
        return;
    }
    do{
        cout<<temp->data<<" ";
        temp=temp->next;

    }while(tail!= temp);
    cout<<endl;
}

void insertnode(node* &tail,int element,int d){
    // empty list
    if(tail==NULL){
        node* temp=new node(d);
        tail=temp;
        temp->next=temp;
    }
    // non_empty list
    else{
        
        node* crnt=tail;
        while(crnt->data!= element){
            crnt=crnt->next;
        }
        node* temp=new node(d);
        temp->next=crnt->next;
        crnt->next=temp;
    }
}
void deletenode(node* &tail,int value){
    if(tail== NULL){
        cout<<"list is empty,check again"<<endl;
        return;
    }//non_empty case
    else{
        //assuming the value is present in linked list
        node* prev=tail;
        node* crnt=prev->next;
        while(crnt->data!=value){
            prev=crnt;
            crnt=crnt->next;
        }
        prev->next=crnt->next;
        if(tail==crnt){
            tail=prev;
        }
        crnt->next=NULL;
        delete crnt;

    }
}
int main(){
    // node* n1=new node(10);
    node* tail=NULL;
    insertnode(tail,5,3);
    print(tail);
    insertnode(tail,3,5);
    print(tail);
    insertnode(tail,5,9);
    print(tail);
    insertnode(tail,9,11);
    print(tail);
    insertnode(tail,3,6);
    print(tail);
    insertnode(tail,5,7);
    print(tail);
    deletenode(tail,3);
    print(tail);

}