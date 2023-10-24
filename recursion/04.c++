#include<bits/stdc++.h>
using namespace std;
bool array1(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{
        bool ans=array1(arr+1,n-1);
        return ans;
    }

}
int sum1(int arr[],int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }else{
        int sum=arr[0]+arr[1];
        int ans=sum+sum1(arr+2,n-2);
        return ans;
    }
}
bool ls(int arr[],int n,int m){
    if(n==0){
        return false;
    }
    if(n==1){
        if(arr[0]==m){
            return true;
        }else{
            return false;
        }
    }
    else{
        if(arr[0]==m){
            return true;
        }else{
            bool ans=ls(arr+1,n-1,m);
            return ans;
        }
    }
}
bool bs(int arr[],int s,int e,int m){
    
    
    if(s>e){
        return false;
    }
    int mid=s+(e-s)/2;
    
    if(arr[mid]==m){
        return true;
    }
    if(m>arr[mid]){
        return bs(arr,mid+1,e,m);
            
    }else{
        return bs(arr,s,mid-1,m);

    }
}


int main(){
    int arr[100]={3,5,1,2,6};
    int n=5;
    int s=0;
    int e=n-1;
    int ans=array1(arr,n);
    if(ans){
        cout<<"sorted"<<endl;

    }else{
        cout<<"not sorted"<<endl;
    }
    cout<<"sum is->" << sum1(arr,n)<<endl;
    int m;
    cin>>m;
    int ans1=ls(arr,n,m);
    if(ans1){
        cout<<"found"<<endl;

    }else{
        cout<<"not found"<<endl;
    }
    int ans2=bs(arr,0,4,m);
    if(ans2){
        cout<<"found"<<endl;
    }else{
        cout<<"not found"<<endl;
    }
    
}