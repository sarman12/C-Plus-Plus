//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        pair<long,long> occur;
        int s=0;
        int e=v.size();
        int mid=s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            if(v[mid]==x){
                ans=mid;
                e=mid-1;
            }else if(v[mid] > x){
                e=mid-1;
            }else{
                s=mid+1;
            }
            int mid=s+(e-s)/2;
        }
        occur.first=ans;
        ans=-1;
        while(s<=e){
            if(v[mid]==x){
                ans=mid;
                s=mid+1;
            }else if(v[mid] > x){
                e=mid-1;
            }else{
                s=mid+1;
            }
            int mid=s+(e-s)/2;
        }
        occur.second=ans;
        
        return occur;
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}
