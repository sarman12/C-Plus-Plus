#include<bits/stdc++.h>
using namespace std;
void powerset(int arr[],int arr1[],int i,vector<int>& ans){
    if(i>arr.size()){
        ans.push_back(arr1);
        return ;
    }
    powerset(arr,arr1,i+1,ans);
    int element=arr[i];
    arr1->push_back(element);
    powerset(arr,arr1,i+1,ans);
}
int main(){
    int arr[3]={1,2,3};
    vector<int> ans;
    int arr1[10]={};
    int i=0;
    // int n=3;
    powerset(arr,arr1,i,ans);
    return ans;
}
