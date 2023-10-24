#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i == 0){
            return false;
        }
        
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter your Number:";
    cin>>n;
    bool ans= isprime(n);
    if(n != 1 && ans == true){
        cout<<" Is a Prime number";
    }else{
        cout<<"Is not a prime number";
    }
    return 0;
}