#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int fibo(int n){
    if(n<=1){
        return n;
    }
    int last=fibo(n-1);
    int slast=fibo(n-2);
    return last+slast;
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int res=fact(n);

    cout<<"the factorial of "<<n<<" is :"<<res<<endl;

    int resu=fibo(n);
    cout<<"The "<< n <<" no fibonachi number is:"<< resu;
}