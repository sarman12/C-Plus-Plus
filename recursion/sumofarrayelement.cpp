#include <bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return arr[0];
    }
    return arr[0]+sum(arr+1,n-1);
}
int main(){
    int arr[]={2,4,9,9,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int ans=sum(arr,n);
    cout<< "Sum of all the element "<<ans<<endl;
    return 0;
}