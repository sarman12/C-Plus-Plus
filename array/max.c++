#include<bits/stdc++.h>
using namespace std;
int s1max(int arr[],int n){
    if(n<2){
        return -1;
    }
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] >max){
            smax=max;
            max=arr[i];
        }else if(arr[i] > smax && arr[i] != max){
            smax=arr[i];
        }
    }
    return smax;
    
}
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[100];
    cout<<"enter the element of the array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=s1max(arr,n);
    cout<<"The second largest is "<<s<<endl;

}