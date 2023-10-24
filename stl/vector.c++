#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    // vector<int> v(5,1);
    cout<<v.capacity()<<endl;
    v.push_back(1);
     cout<<v.capacity()<<endl;
     v.push_back(2);
        cout<<v.capacity()<<endl;
    v.push_back(3);
        cout<<v.capacity()<<endl;
    v.push_back(4);
        cout<<v.capacity()<<endl;
    cout<<"Front->"<<v.front()<<endl;
    cout<<"Back->"<<v.back()<<endl;
    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
// deque same as vector but you can pop or push element from both the side;


}