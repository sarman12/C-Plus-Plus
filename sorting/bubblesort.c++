#include<bits/stdc++.h>
using namespace std;
int bubblesort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[1];
}
int main(){
    int n;
    cout<<"Enter the number of Array elements ->";
    cin>>n;
    int arr[100];
    cout<<"Enter the elements of the array ->";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"Before the bubble sort,the array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"{ "<<arr[i]<<" }";
    }
    bubblesort(arr,n);
    cout<<"\nAfter the bubble sort,the array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";

    }
    return 0;

}