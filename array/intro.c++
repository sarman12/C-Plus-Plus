#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    cout<<"enter the total number pf arrays:"<<endl;
    cin>>n;
    int arr[50];
    cout<<"enter the elemnet:"<<endl;
    for(int i=0;i<n;++i){
        
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        cout<<arr[i] << " ";
    
    }
    // for(int i=0;i<n;i++){
        
    //     if(arr[i]>arr[i+1]){
    //         cout<<"the biggest number:"<<arr[i]<<endl;

    //     }else{
    //         cout<<"the biggest number is:"<< find_largest arr[i+1]<<endl;
    //     }
    // }
    //int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nthe biggest number:"<< *max_element(arr,arr+n);
   

    
}
