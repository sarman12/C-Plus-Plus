#include<bits/stdc++.h>
using namespace std;
class queue1{
    int *arr;
    int qfront;
    // int rear;
    int element;
    int size;

    public:
    queue1(int size){
        this->size=size;
        arr=new int[size];
        qfront=0;
        element=0;
        // rear=size;
    }
    int push(int data){
        if(element==size){
            cout<<"queue overflow"<<endl;
            
        }
        else{
            
            arr[element]=data;
            element++;
            
        }
    }
    int pop(){
        if(qfront==element){
            return -1;
        }
        else{
            arr[qfront]=-1;
            qfront++;
            if(qfront==element){
                qfront=0;
                element=0;
            }
        }
    }
    int empty(){
        if(qfront==element){
            cout<<"queue is empty"<<endl;
        }
        else{
            cout<<"queue is not empty"<<endl;
        }
    }
    int front(){
        if(qfront==element){
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
    queue1 q1(10);
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