// aggresive cow question;
#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid)
{
    int cow=1;
    int coorditnate=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-coorditnate >=mid){
            cow++;
            if(cow == m){
                return true;
            }
            coorditnate=arr[i];
        }
    }
    return false;

}
int cows(int arr[],int n,int m)
{
    std::sort(arr,arr+n);
    int s=0;
    int max=-1;
    int e=*max_element(arr,arr+n);
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[]={4,2,1,3,7};
    int n=5;
    int result=cows(arr,5,2);
    cout<<"the result is : " << result;
}