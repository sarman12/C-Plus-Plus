// square root using BS
#include<bits/stdc++.h>
using namespace std;
long long int bs(int n){
    int start=0;
    int end=n;
    long long int mid=start+(end-start)/2;
    long long int ans=-1;
    while(start<=end){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int ans=bs(64);
    cout<<"the square root is: "<<ans<<endl;
    return 0;
}