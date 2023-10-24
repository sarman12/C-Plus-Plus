
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int,int> v;
        sort(arr,arr+n);
        int count=0;
        int ans=1;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                v.push_back(arr[i+1]);
                count++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i] == ans){
                ans++;
                
            }
        }
        v.push_back(ans);
        
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}