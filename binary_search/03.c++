// peak value of mountain array
#include<bits/stdc++.h>
using namespace std;
int mountain(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==arr[mid+1]){
            s=mid-1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[5]={2,3,6,2,1};
    int ans=mountain(arr,5);
    cout<<"the peak value is: "<<ans<<endl;
    return 0;
}