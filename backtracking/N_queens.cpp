#include<bits/stdc++.h>
using namespace std;
void addsol(vector<vector<int>> &ans,vector<vector<int>> &arr,int n){
	vector<int> temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			temp.push_back(arr[i][j]);
		}
	}
	ans.push_back(temp);
}
bool issafe(int row,int col,vector<vector<int>> &arr,int n){
	int x=row;
	int y=col;
	while(y>=0){
		if(arr[x][y] == 1){
			return false;
			y--;
		}
		
	}
	x=row;
	y=col;
	while(x>=0 && y>=0){
		if(arr[x][y] == 1){
			return false;
			x--;
			y--;
		}
	}
	x=row;
	y=col;
	while(x<n && y>=0){
		if(arr[x][y] == 1){
			return false;
			x++;
			y--;
		}
	}
	return true;
}
void solve(int col,vector<vector<int>> &ans,vector<vector<int>> &arr,int n){
	if(col == n){
		addsol(ans,arr,n);
		return;
	}
	for(int row=0;row<n;row++){
		if(issafe(row,col,arr,n)){
			arr[row][col]=1;
			solve(col+1,ans,arr,n);
			arr[row][col]=0;
		}
	}
}
vector<vector<int>> N_queens(int n){
	vector<vector<int>> arr(n,vector<int>(n,0));
	vector<vector<int>> ans;
	solve(0,ans,arr,n);
	return ans;

}
int main(){
	
        int n;
        cin>>n;
        
        // Solution ob;
        vector<vector<int>> ans =N_queens(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    
    return 0;

}