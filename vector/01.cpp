#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int m=3;
    int ans=1;
    vector<vector<int>> vecc;
    
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            temp.push_back(ans);
            ans += 1;
        }
        vecc.push_back(temp);
    }
    for(int i=0;i<vecc.size();i++){
        for(int j=0;j<vecc[i].size();j++){
            cout<<vecc[i][j]<<" ";
        }
        cout<<endl;
    }
}