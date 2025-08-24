#include <bits/stdc++.h>
using namespace std;

void solve(int index,vector<int>& arr,vector<int> temp,vector<vector<int>>& ans){
    if(index == arr.size()){
        ans.push_back(temp);

        return;
    }
    solve(index + 1, arr, temp, ans);

    temp.push_back(arr[index]);
    solve(index+1,arr,temp,ans);
    temp.pop_back();
}

vector<vector<int>> subset(vector<int>& arr){
    vector<vector<int>> ans;
    vector<int> temp;
    solve(0,arr,temp,ans);
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans = subset(arr);

    for(auto it:ans){
        cout<<"{";
        for(int i=0;i<it.size();i++){
            cout<<" "<<it[i]<<" ";
        }
        cout<<"}";
        cout<<endl;
    }
}