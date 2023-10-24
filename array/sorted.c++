#include<bits/stdc++.h>
using namespace std;
int sorted(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                return false;
            }
        }
    }
    return true;

}
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[100];
    cout<<"enter the element of the array->";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=sorted(arr,n);
    if(ans) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    return 0;
}