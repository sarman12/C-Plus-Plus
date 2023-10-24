#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int return1(int arr[],int n,int k){
    for(int i=n-1;i>=0;i--){
        if(arr[i] == k){
            return i;
        }
       
    }
    return -1;
}
int main() {
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int k;
    cin>>k;
    cout<<return1(arr,n,k)<<endl;

    return 0;
}