// sorted list
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
    ~node(){
        int value=this->data;
        if(this->next != NULL){
            delete next;
            this->next=next;
        }
        
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
// for sorted list
node* removeduplicates(node* head){
    if(head==NULL){
        return NULL;
    }
    node* crnt=head;
    // node* temp=head->next;
    while (crnt != NULL ){
        
        if(crnt->next != NULL&&(crnt->data==crnt->next->data)){
            node* next_next=crnt->next->next;
            node* nodetodelete=crnt->next;
            delete nodetodelete;
            crnt->next=next_next;  
        }
        else
        {
            crnt=crnt->next;
        }
    }
    return head;
}
// for unsorted list
node* removeunsorted(node* head){
    node* crnt=head;
    
    while(crnt!= NULL){
        node* hello=crnt->next;
        while(hello!= NULL){
            if(crnt->data==hello->data){
                node* next_next=crnt->next->next;
                node* nodetodelete=crnt->next;
                delete nodetodelete;
                crnt->next=next_next;  
            }
            hello=hello->next;
        }
        crnt=crnt->next;

    }
    return head;
}
int main(){
    node* n1=new node(20);
    node* head=n1;
    insert(head,18);
    insert(head,17);
    insert(head,16);
    insert(head,16);
    insert(head,12);
    insert(head,12);
    insert(head,12);
    insert(head,10);
    print(head);
    cout<<removeduplicates(head)<<endl;
   
}