#include<bits/stdc++.h>
using namespace std;
int palindrome(char arr[],int n){
    int s=0;
    int e=n-1;
    for(int i=0;arr[s++]==arr[e--];i++){
        return true;
    }
    return false;
}
int getleght(char arr[]){
    int count=0;
    for(int i=0;arr[i] != '\0' ;i++){
        count++;
    }
    return count;
}
int main(){
    char arr[100];
    cout<<"Enter the name -> ";
    cin>>arr;
    int len=getleght(arr);
    int pa=palindrome(arr,len);
    if(pa){
        cout<<"YES,its a palindrome";
    }
    else{
        cout<<"NO,not a palindrome";
    }
    
}