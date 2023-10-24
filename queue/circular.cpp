#include<bits/stdc++.h>
using namespace std;
class circularqueue{
    int *arr;
    int qfront;
    // int rear;
    int rear;
    int size;

    public:
    circularqueue(int size){
        this->size=size;
        arr=new int[size];
        qfront=-1;
        rear=-1;
        // rear=size;
    }
    int push(int data){
        if((qfront==0 && rear==size-1 ) || (rear==(qfront-1) % (size-1))){
            cout<<"queue overflow"<<endl;
            
        }
        else if(qfront==-1){
            qfront=rear=0;
        }
        else if(rear==size-1 && qfront!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=data;
    }
    int pop(){
        
        if(qfront==-1){
            cout<<"queue is empty"<<endl;
        }
        int ans=arr[qfront];
        qfront==-1;
        if(qfront==rear){
            qfront=rear=-1;

        }
        else if(qfront==size-1){
            qfront=0;
        }
        else{
            qfront++;
        }
        return ans;
    }
    
    int empty(){
        if((qfront==0 && rear==size-1 ) || (rear==(qfront-1) % (size-1))){
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<"queue is not empty"<<endl;
        }
    }
    int front(){
        if((qfront==0 && rear==size-1 ) || (rear==(qfront-1) % (size-1))){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }

};
int main(){
    // queue<int> q;
    // q.push(10);
    // q.push(12);
    // q.push(13);
    // cout<<q.front()<<endl;
    // cout<<q.back()<<" ";
    // cout<<q.size();
    circularqueue q1(10);
    q1.push(1);
    q1.push(2);
    q1.push(19);
    cout<<q1.front()<<endl;
    q1.pop();
    q1.pop();
    cout<<q1.front()<<endl;
    q1.empty();
    return 0;
}