#include<bits/stdc++.h>
using namespace std;
void dunc(int *p){
    cout<<*p<<endl;
}
int getsum(int *arr,int n){
    cout<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    return sum;
}
int main(){
    // int arr[10]={2,4,1,24,56,6};
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<&arr[1]<<endl;
    // cout<<&arr[12]<<endl;
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr+1+1)<<endl;
    // cout<<arr[2]<<endl;
    // cout<<2[arr]<<endl;
    // cout<<*(2+arr)<<endl;
    // cout<<sizeof(arr)<<endl;
    // // int *p=&arr[0];
    // // cout<<p<<endl;
    // // cout<<&p<<endl;
    // // cout<<sizeof(&p)<<endl;
    // char ch[10]="acvs";
    // char*d=&ch[0];
    // cout<<d<<endl;
    // cout<<&ch<<endl;
    // int value=5;
    // int *p = &value;
    // //int nas=dunc(p);
    // dunc(p);
    int arr[5]={3,2,19,53,34};
    int ans=getsum(arr+1,5);
    cout<<ans<<endl;
    return 0;
}
