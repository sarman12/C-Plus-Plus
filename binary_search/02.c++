#include<bits/stdc++.h>
using namespace std;
int firstoccarance(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;

    int ans=-1;
    while(low<=high){
        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]>key){
            high=mid-1;
            
        }
        else{
            low=mid+1;
        }
        mid=low+(high-low)/2;
    }
    return ans;
    
}
int lastoccurance(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;

    int ans=-1;
    while(low<=high){
        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]>key){
            high=mid-1;
            
        }
        else{
            low=mid+1;
        }
        mid=low+(high-low)/2;
    }
    return ans;
    
}
int main(){
    int arr[12]={1,1,2,3,4,4,5,5,6,6,6,6};
    int res=firstoccarance(arr,12,6);
    int res2=lastoccurance(arr,12,6);
    int total=(res2-res)+1;
    cout<<"The first occarance of 6 is at index:"<<res<<endl;
    cout<<"The last occurence of 6 is at index :"<<res2<<endl;
    cout<<"The total occurence of 6 is :"<<total<<endl;

    return 0;
}