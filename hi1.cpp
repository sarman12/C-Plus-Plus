#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,3,4,5,6};
    int n=5;
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        int result=0;
        for(int j=i;j<n;j++){
            result += arr[j];
            
        }
        sum += result;
    }
    cout<<sum<<" ";
    return 0;
}