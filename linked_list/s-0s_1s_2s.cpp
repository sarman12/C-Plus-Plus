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
node* zeros_ones_twos(node* head){
    int zerocount=0;
    int onecount=0;
    int twocount=0;
    node* temp=head;
    while(temp != NULL){
        if(temp->data==0){
            zerocount++;
            
        }
        else if(temp->data==1){
            onecount++;
            
        }
        else if(temp->data==2){
            twocount++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!= NULL){
        if(zerocount!=0){
            temp->data=0;
            zerocount--;
        }
        else if (onecount!=0){
            temp->data=1;
            onecount--;
        }
        else if(twocount!=0){
            temp->data=2;
            twocount--;
        }
        temp=temp->next;
    }
    return head;

}
int main(){
    node* n1=new node(1);
    node* head=n1;
    insert(head,1);
    insert(head,0);
    insert(head,2);
    insert(head,1);
    insert(head,0);
    insert(head,2);
    insert(head,1);
    insert(head,0);
    print(head);
    cout<<zeros_ones_twos(head)<<endl;
}