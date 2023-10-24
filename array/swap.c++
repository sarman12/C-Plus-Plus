#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={2,4,1,8,5,9,6};
    int n=sizeof (arr)/sizeof (arr[0]);
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}