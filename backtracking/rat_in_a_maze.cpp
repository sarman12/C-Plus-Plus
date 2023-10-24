#include<bits/stdc++.h>
using namespace std;
bool issafe(int newx,int newy,vector<vector<bool>> &vis,vector<vector<int>> & arr,int n){
    if((newx >= 0 && newx < n) && (newy >= 0 && newy < n) && (vis[newx][newy] != 1 && arr[newx][newy] == 1)){
        return true;
    }else{
        return false;
    }
}
void solve(int x,int y,vector<vector<int>> & arr,int n,vector<string>&ans,vector<vector<bool>> &vis,string path){
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    // total 4 kinds of movement -> D L R U
    // for D
    vis[x][y]=1;
    if(issafe(x+1,y,vis,arr,n)){
        
        solve(x+1,y,arr,n,ans,vis,path+'D');
        
    }
    // for L
    if(issafe(x,y-1,vis,arr,n)){
        solve(x,y-1,arr,n,ans,vis,path+'L');
    }
    // for R
    if(issafe(x,y+1,vis,arr,n)){
        solve(x,y+1,arr,n,ans,vis,path+'R');

    }
    // for U
    if(issafe(x-1,y,vis,arr,n)){
        solve(x-1,y,arr,n,ans,vis,path+'U');
    }
    vis[x][y]=0;
}
vector<string> searchmaze(vector<vector<int>> & arr,int n){
    vector<string> ans;
    vector<vector<bool>> visited(n,vector<bool> (n,0));
    string path="";
    if(arr[0][0] == 0){
        return ans;
    }
    solve(0,0,arr,n,ans,visited,path);
    return ans;

}
int main() {
    
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        // Solution obj;
        vector<string> result = searchmaze(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    
    return 0;
}