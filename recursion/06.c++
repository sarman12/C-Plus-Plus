#include<bits/stdc++.h>
using namespace std;
void reverse(string& s,int i,int j){
    
    if(i>j){
        return ;
    }   
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
//bool palindrome(string& s,int i,int j)
int main(){
    string s="abcde";
    int i=0;
    int j=s.length()-1;
    // int size=s.length();
    // cout<<s[size-1]<<endl;
    reverse(s,i,j);
    cout<<s<<endl;
}
