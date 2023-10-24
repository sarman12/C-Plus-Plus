// sum of two arraysl
#include<bits/stdc++.h>
using namespace std;
vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    while(s<e){
        swap(v(s++).v(e--));
    }
    return v;
}
vector<int> sum(vector<int>&arr1,int n,vector<int>&arr2,int m)
{
    int i=n-1;
    int j=m-1;
    int carry=0;
    vector<int> ans;

    while(i>=0 && j>=0){
        int val1=arr1[i];
        int val2=arr2[j];
        int sum=val1+val2+carry;
        carry=sum/10;
        sum= sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum=arr1[i]+carry;
        carry=sum/10;
        sum= sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum=arr2[j]+carry;
        carry=sum/10;
        sum= sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum=carry;
        carry=sum/10;
        sum= sum%10;
        ans.push_back(sum);
      
    }
    return reverse(ans);
}
int main()
{
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(6);
    vector<int> arr2;
    arr2.push_back(4);
    vector<int> result=sum(vector<int>arr1,4,vector<int>arr2,1);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

}