#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<char> hi1;
    // int arr[n]={2,4,5,8,2,4,2,9};
    string str1="anagram";
    string str2="grammar";
    // int n=sizeof(arr)/sizeof(arr[0]);
    
    // hi[-1]=0;
    int n1=str1.size();
    int n2=str2.size();
    unordered_map<char,int> map;
    int count=0;
        
    for(int i=0;i<n1;i++){
        map[str1[i]];
    }
    for(int i=0;i<n2;i++){
        if(map[str2[i]] > 0){
            map[str2[i]]--;
        }
    }
    // int count=0;
    for(auto it:map){
        count += it.second;
    }
    cout<<count;
    return 0;

}