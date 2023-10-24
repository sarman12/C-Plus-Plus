#include<bits/stdc++.h>
using namespace std;
char occarence(string s){
    int count=0;
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int num=0;
        num =ch - 'a';
        arr[num]++;
    }
    int max=-1,ans=0;
    for(int i=0;i<26;i++){
        if(max< arr[i]){
            ans =i;
            max=arr[i];
        }
    }
    char finalans='a'+ans;
    return finalans;
}
int main(){
    string s;
    cin>>s;
    cout<<occarence(s);

}