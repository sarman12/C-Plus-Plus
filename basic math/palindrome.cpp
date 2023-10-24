#include<bits/stdc++.h>
using namespace std;
int reverse(int x){
    
    int y=0;
    while(x>0){
        int num=x % 10;
        y=y*10+num;
        x=x/10;
    }
    return y;
}
int main(){
    int x;
    cout<<"Enter the number:";
    cin>>x;
    int dummy=x;
    int y=reverse(x);
    if(dummy==y){
        cout<<"Is a Palindrome Number"<<endl;
    
    }
    else{
        cout<<"Is Not a Palindrome Number->"<<endl;
    }
    return 0;
}