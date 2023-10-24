#include<bits/stdc++.h>
using namespace std;
int selection(int arr[],int n){
    for(int i=0;i<n;i++){
        int minimum=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minimum]){
                minimum=j;
            }
        }
        int temp=arr[minimum];
        arr[minimum]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n;
    cout<<"Enter the number of Array elements ->";
    cin>>n;
    int arr[100];
    cout<<"Enter the elements of the array ->";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"Before the selection sort,the array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"{ "<<arr[i]<<" }";
    }
    selection(arr,n);
    cout<<"\nAfter the selection sort,the array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";

    }
    return 0;
}
