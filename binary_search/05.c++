// Book allocation problem
#include<bits/stdc++.h>
using namespace std;
// we have to change the end and start part according to the array elements
bool isPossible(int arr[],int n,int m,int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];

        }else{
            studentcount++;
            if(studentcount>m || arr[i] >mid){
                return false;
            }
            pagesum =arr[i];
        }
    }
    return true;
}


int book(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){
    int arr[100]={10,20,30,40};
    int n=4;
    int result=book(arr,4,2);
    cout<<result<<endl;
}