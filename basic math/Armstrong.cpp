#include<bits/stdc++.h>
using namespace std;
bool Armstrongnum(int n){
    int original=n;
    int count=0;
    
    for(int temp=n;temp!=0;count++){
            temp=temp/10;
    }
    int sumofpower=0;
    while(n !=0){
        int digit=n%10;
        sumofpower+=pow(digit,count);
        n/=10;
    }
    return(sumofpower == original);
}
int main(){
    int n1;
    cout<<"enter the value:?";
    cin>>n1;
    if (Armstrongnum(n1)){
        cout<<"Yes,its a armstrong number"<<endl;
    }
    else{
        cout<<"No,it's not a armstrong number"<<endl;
    }
    return 0;
}