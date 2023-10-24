#include<bits/stdc++.h>
using namespace std;
int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];

    }
    return sum;
}
int main(){
    // int i=5;
    // int &j=i;
    // cout<<"hello wprld->"<<++j <<"-<" <<i<<' '<<j++<<" "<<j<<endl;
    char ch='w';
    cout<<"size of -> "<<sizeof(ch)<<endl;
    char *chptr=&ch;
    cout<<"size of ->"<< sizeof(chptr)<<endl;

    // new int;
    // int *n=new int;
    // *n=10;
    // cout<<n<<endl;
    // cout<<*n<<endl;
    // cout<<sizeof(n)<<endl;
    // cout<<new int<<endl;
    int n;
    cin>>n;
    int *arr=new int(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=getsum(arr,n);
    cout<<"answer is "<< sum<<endl;
    return 0;
// case 1
    while(true){
        int i=5;
    }
    //  case 2
    while(true){
        int *ptr=new int;
        delete ptr;
        // for deleting array elements
        // delete []arr;
    }
}