#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,3,4,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<arr[0]<<endl;
    vector<int> ans;
    // int key=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1] != 1){
            for(int j=1;j<=(arr[i]-arr[i-1]);j++){
                ans.push_back(arr[i-1]+j);
            }
        }
        // i=0;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i] << " ";
    }
}