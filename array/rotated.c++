#include<bits/stdc++.h>
using namespace std;
void leftrotate(int arr[],int n,int d){
    if (n==0){
        return;
    }
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr + d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n;
    int d;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[100];
    cout<<"enter the element of the array->";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"before leftrotate->";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the rotate thing:";
    cin>>d;
    leftrotate(arr,n,d);
    
    
    cout<<"after leftrotate->";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}