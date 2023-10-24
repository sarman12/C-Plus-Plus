#include<bits/stdc++.h>
using namespace std;
class stackme{
    public:
        int top;
        int *arr;
        int size;
    stackme(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int data){
        if(size-top >1){
            top++;
            arr[top]=data;;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>= 0 && top<size){
            return arr[top];
        }
        else{
            return -1;
        }
    }
};

int main(){
    
    stackme st(5);
    st.push(22);
    st.push(25);
    st.push(12);
    st.push(90);
    st.push(12);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    return 0;
}