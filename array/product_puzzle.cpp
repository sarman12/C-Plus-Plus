#include<bits/stdc++.h>
using namespace std;
vector<int> puzzle(vector<int> arr,int n){
    int index=0;
    int mul=1;
    vector<int> ans;
    while(index<n){
        for(int i=0;i<n;i++){
            mul *= arr[i];
        }
        mul = mul/arr[index];
        ans.push_back(mul);
        index++;
    }
    return ans;
}
int main(){
    vector<int> arr={10,2,4,6,3};
    int n=arr.size();
    vector<int> result=puzzle(arr,n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    
}