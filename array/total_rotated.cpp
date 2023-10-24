
#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to swap odd and even bits.
    vector<int> binary(unsigned int n){
        vector<int> num;
        while(n!=0){
            int temp=n%2;
            num.push_back(temp);
            n/=2;
        }
        return num;
    }
    void swapping(vector<int> ans){
        // vector<int> num=bina
        for(int i=0;i<ans.size();i+=2){
            int temp=ans[i];
            ans[i]=ans[i+1];
            ans[i+1]=temp;
        }
    }
    unsigned int swapBits(unsigned int n)
    {
    	vector<int> ans=binary(n);
    	for(int i=ans.size();i<32;i++){
    	    ans.push_back(0);
    	}
    // 	swapping(ans);
    	// unsigned sum=0;
    	// for(int i=0;i<ans.size();i++){
    	//     sum+=ans[i]*pow(2,i);
    	// }
    	return ans;
    }
};

//{ Driver Code Starts.
int main() {
    
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.swapBits(N);
        for(auto it:ans){
            cout<<it<<" ";
        }
    
    return 0;
}
// } Driver Code Ends