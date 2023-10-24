#include<bits/stdc++.h>
using namespace std;
void permute(string str,int s,int e){
    if(s==e){
        cout<< str <<" ";
    }else{
        for(int i=s;i<=e;i++){
            swap(str[s],str[i]);
            permute(str,s+1,e);
            // backtracking
            swap(str[s],str[i]);
        }
    }
}
int main(){
    string str ="ABC";
    int n=str.size();
    permute(str,0,n-1);
    return 0;
}