#include<bits/stdc++.h>
using namespace std;
int main(){
    
        // Complete the function
        int a[]={5,4,3,2,1};
        int n=5;
        sort(a,a+n);
        vector<int>arr;
        long long ans=0;
        for(int i=0;i<n;i++){
            // cout<<a[i]<<" ";
            ans=a[i]*i;
            arr.push_back(ans);
        }
        long long int sum=0;
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
        //     return sum;
            
        // }
        }
        cout<<sum<<endl;
}