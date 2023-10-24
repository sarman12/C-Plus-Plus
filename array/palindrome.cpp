#include<bits/stdc++.h>
using namespace std;
bool palindrome(string name,int n){
    int x=0;
    int y=n-1;
    
    while(x<y){
        if(name[x]==name[y]){
            return true;
            x++;
            y--;
        }
        else{
            return false;
        }
    }
    return 0;
}
int main(){
    string name="hanah";
    int n=5;
    bool x=palindrome(name,n);
    if(x){
        cout<<"its a palindrome"<<endl;
    }
    else{
        cout<<"its not a palindrome"<<endl;
    }
}