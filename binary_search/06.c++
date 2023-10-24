// painters partition
#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid)
{
    int painter=1;
    int boardavailable=0;
    for(int i=0;i<n;i++)
    {
        if(boardavailable+arr[i] <= mid)
        {
            boardavailable += arr[i];
        }
        else
        {
            painter++;
            if(painter > m || arr[i]>mid)
            {
            return false;
            }
            boardavailable = arr[i];
        }
       
    }
    return true;
}
int painters(int arr[],int n,int m)
{
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(ispossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[100]={5,6,10,12};
    int n=4;
    int result=painters(arr,4,2);
    cout<<"The ans is->"<<result<<endl;
}