#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
    while(low<=high){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>=key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=low+(high-low)/2;
    }
    return -1;

}

int main(){
    
    int n;
    cout<<"enter the number of the elments:";
    cin>>n;
    int key;
    int arr[100];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The sorted array  is: ";
    for(int i=0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    
   
    int result=bs(arr,n,78);
    cout<<"\n the element is in " << result <<endl;
    

    return 0;
}