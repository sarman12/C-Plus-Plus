#include<bits/stdc++.h>
using namespace std;
void sortarray(int arr[],int n){
    if(n==0 || n==1){
        return ;
    }
    else{
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }
    sortarray(arr,n-1);
}
int main(){
    int arr[100]={2,1,9,-7,-8,-1,10,0,100};
    int n=9;
    sortarray(arr,9);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}