#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=5;
   // int num1=*num
    //cout<< *num<<endl;
    cout<<"Address of the number->"<<&num<<endl;
    int *ptr=&num;
    // int
    cout<<(*ptr)<<endl;
    cout<<"size of interger->"<<sizeof(num)<<endl;
    cout<<"size of interger->"<<sizeof(ptr)<<endl;
    return 0;
}