#include<bits/stdc++.h>
using namespace std;
int main(){
   /* int i=5;
    int *p=0;
    p=&i;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<sizeof(i)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;*/
    int b=5;
    int *d=&b;
    int a=*d;
    a++;
    *d++;
    cout<<b<<endl;
    cout<<*d<<endl;
    cout<<a<<endl;
    int *p=d;
    cout<<d<<" - "<<p<<endl;
    cout<<*d<<"- "<<*p<<endl;

}