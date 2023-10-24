#include<bits/stdc++.h>
using namespace std;
class doubly{
    public:
    int *arr;
    int size;
    int front1;
    // int front2;
    int back1;
    // int back2;
    public:
    doubly(int size){
        this->size=size;
        arr=new int[size];
        front1=-1;
        back1=-1;
        // front2=size;
        // back2=size;
    }
    void push_front(int data){
        if(isfull()){
            cout<<"queue is full"<<endl;
        }
        else if(front1==-1){
            front1=back1=0;

        }
        else if(front1==0 && back1==size-1){
            front1=size-1;
            
        }
        else{
            front1--;
        }
        arr[front1]=data;
    }
    void push_back(int data){
        if(isfull()){
            cout<<"queue is full"<<endl;
        }
        else if(front1==-1){
            front1=back1=0;

        }
        else if(back1==size-1 && front1!=0){
            back1=0;
        }
        else{
            back1++;

        }
        arr[back1]=data;
    }
    int pop_front(){
        if(isempty()){
            cout<<"queue is empty"<<endl;
        }
        int ans=arr[front1];
        front1==-1;
        if(front1==back1){
            front1=back1=-1;

        }
        else if(front1==size-1){
            front1=0;
        }
        else{
            front1++;
        }
        return ans;
    
        
    }
    int pop_back(){
        if(isempty()){
            cout<<"queue is empty"<<endl;
        }
        int ans=arr[back1];
        front1==-1;
        if(front1==back1){
            front1=back1=-1;

        }
        else if(back1==0){
            back1=size-1;
        }
        else{
            back1--;
        }
        return ans;
    }
    int getfront(){
        if(isempty()){
            return -1;
        }
        else{
            return arr[front1];
        }
    }
    int getback(){
        if(isempty()){
            return -1;
        }
        else{
            return arr[back1];
        }
    }
    bool isempty(){
        if(front1==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isfull(){
        if((front1==0 && back1==size-1 ) || (front1 != 0 && back1==(front1-1) % (size-1))){
            return true;
        }
        else{
            return false;
        }
        
    }
};
int main(){
    doubly d1(10);
    d1.push_front(10);
    d1.push_back(12);
    d1.push_front(1);
    d1.push_back(2);
    d1.push_front(20);
    d1.push_back(19);
    cout<<d1.getfront()<<endl;
    cout<<d1.getback()<<endl;
    d1.pop_back();
    d1.pop_front();
    cout<<d1.getfront()<<endl;
    cout<<d1.getback()<<endl;
}