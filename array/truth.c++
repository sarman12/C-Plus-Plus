#include<bits/stdc++.h>
using namespace std;
bool truth(int arr[],int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1] > arr[i]){
            count++;

        }
        if(arr[n-1] > arr[0])
        {
            count++;
        }
        return count<=1;
    }
    
}
int main()
{
    int arr[5]={1,8,3,4,5};
    int result=truth(arr,5);
    cout<<result<<endl;
}