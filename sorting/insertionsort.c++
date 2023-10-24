#include<bits/stdc++.h>
using namespace std;
int insertion(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j-=1;

        }
    }
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
    cout<<"Before the insertion sort,the array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"{ "<<arr[i]<<" }";
    }
    insertion(arr,n);
    cout<<"\nAfter the insetion sort,the array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";

    }
    return 0;

}