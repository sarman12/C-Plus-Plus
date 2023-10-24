#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={2,4,1,3,7};
    int n;
    cout<<"ennter your number:";
    cin>>n;

    for(int i=0;i<=5;i++){
        if(arr[i]==n){
            cout<<"yes its available and the index number is "<<i<<endl;
        }
        // else{
        //     cout<<"not available";
        // }
    }
    return -1;
}