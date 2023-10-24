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
bool detectloop(node* head){
    if(head==NULL){
        return false;
    }
    map<node*,bool>visited;
    node* temp=head;
    while(temp != NULL){
        if(visited[temp]==true){
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}
node* floydcycle(node* head){
    if(head==NULL)
    {
        return NULL;
    }
    node* slow=head;
    node* fast=head;
    while(slow!= NULL&& fast != NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
    
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;

} 
node* startingnode(node* head){
    if(head==0)
        return NULL;
    node* intersection=floydcycle(head);
    node* slow=head;

    if(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
void removeloop(node* head){
    if(head==NULL){
        return;
    }
    node* start=startingnode(head);
    node* temp=start;
    while(temp-> next != start){
        temp=temp->next;

    }
    temp->next=NULL;
}
int main(){
    node* n1=new node(0);
    node* head=n1;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    // tail->next=head->next;
    print(head);
    node* temp=head->next->next;
    // cout<<head->data<<endl;
    // cout<<temp->data<<endl;
    temp->next=head;
    // print(head);
    if(detectloop(head)){
        cout<<"cycle detected"<<endl;
    }
    else{
        cout<<"cycle not detected"<<endl;
    }

    if(floydcycle(head)==NULL){
        cout<<"cycle is not present"<<endl;
    }
    else{
        cout<<"cycle is present";
    }
    node* loop=startingnode(head);
    cout<<"starting loop is->" << loop->data<<endl;
    removeloop(head);
    print(head);
    
    return 0;
}