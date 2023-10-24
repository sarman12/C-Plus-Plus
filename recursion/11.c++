#include<bits/stdc++.h>
using namespace std;
class solution{
private:
    void solve(string str,string output,int index,vetor<string>& ans){
        if(index >= str.length()){
            ans.push_back(output);
            return;
        }
        solve(str,output,index+1,ans);
        char element=str(index);
        output.push_back(element);
        solve(str,output,index+1,ans);
    }
public:
    vector<string> sub(string str){
        // string str;
        vector<string> ans;
        string output="";
        int index=0;
        solve(str,output,index,ans);
        return ans;

    }
}