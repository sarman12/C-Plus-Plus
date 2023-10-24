#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,10> a={2,3,1,23,45,63,5};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    cout<<"Elemnet at 6th index "<<a.at(6)<<endl;
    cout<<"Empty or whot:"<<a.empty()<<endl;
   
}