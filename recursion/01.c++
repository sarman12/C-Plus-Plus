#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    n=n*fact(n-1);
    return n;
}
int pow(int x,int y){
    if(y==0){
        return 1;
    }
    return x*pow(x,y-1);
}
int count(int n){
    //cout<<n<<endl;
    if(n==0){
        return n;
    }
    cout<<n<<endl;
    return count(n-1);
}
int main(){
    // int n;
    // cin>>n;
    // int fact=1;
    // for(int i=1;i<=n;i++){
    //     fact=fact*i;
    // }
    // cout<<fact<<endl;
    int n;
    cin>>n;
    
   // fact(n);
    cout<<fact(n)<<endl;
    int x,y;
    cin>>x>>y;
    cout<<pow(x,y)<<endl;
    cout<<count(n)<<endl;
}