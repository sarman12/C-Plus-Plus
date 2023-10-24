#include<bits/stdc++.h>
using namespace std;
int merge(int arr[],int n,int arr1[],int m,int arr2[])
{
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m)
    {
        if(arr[i]<arr1[j])
        {
            arr2[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            arr2[k]=arr1[j];
            k++;
            j++;
        }
    }
    while (i<n)
    {
        arr2[k]=arr[i];
        k++;
        i++;
    }
    while(j<m)
    {
        arr2[k]=arr1[j];
        k++;
        j++;
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[5]={1,3,5,7,9};
    int arr1[5]={2,6,8,10,11};
    int arr2[8]={0};
    merge(arr,5,arr1,5,arr2);
    print(arr2,8);
    cout<<endl;
    
}