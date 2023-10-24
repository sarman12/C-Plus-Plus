#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i] <<" ";
    }
    int i=0;
        int j=n-1;
        int sumi=0;
        int sumj=0;
        int mid=i+j/2;
        while(i==mid && j==mid){
            sumi=sumi+a[i];
            sumj=sumj+a[j];
            if(sumi>sumj){
                j--;
            }
            else if(sumj>sumi){
                i++;
            }
            
        }
        cout<<sumi<<endl;
        cout<<sumj<<endl;
        return 0;
}