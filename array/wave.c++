#include<bits/stdc++.h>
using namespace std;
int wave(vector<vector <int>> a,int n,int m){
    // vector<int> ans;
   
   for(int col=0;col<m;col++){
        if(col&1!=04 ){
            for(int row=n-1;row>=0;row--){
                cout<<a[row][col]<<" ";
                //ans.push_back(a[row][col]);
            }

        }
        else{
            for(int row=0;row<n;row++){
                cout<<a[row][col]<<" ";
                //ans.push_back(a[row][col]);
            }

        }
   }
//    return ans;
}
int main(){
    vector<vector <int>> a{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int reslt=wave(a,3,3);
    cout<<reslt<<endl;
}