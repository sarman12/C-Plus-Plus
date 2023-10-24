#include<bits/stdc++.h>
using namespace std;
int main(){
    // creation of hashmaps;
    map<string,int> m;

    // insertion

    // 1
    pair<string,int> p1=make_pair("arman", 3);
    m.insert(p1);
    // 2
    pair<string,int> p2("love",2);
    m.insert(p2);
    // 3
    m["mera"] = 1;
    // next time will mean updation;
    m["mera"]= 2;
    cout<<m["mera"]<<endl;
    cout<<m.at("arman")<<endl;
    // cout<<m.at("babbar")<<endl;//this syntax before 22 line,will give an error,but after 22 line,there will be no error;
    cout<<m["babbar"]<<endl;//with this syntax there will be a entry for that particular unknown key with the value 0.
    cout<<m.at("babbar")<<endl;
    cout<<m.size()<<endl;
    cout<<m.count("babbar") <<endl;
    m.erase("babbar");
    cout<<m.size()<<endl;
    // iteration
    for(auto i : m){
        cout<<i.first<<" "<< i.second<<endl;
    }
    // iterator
    map<string,int> :: iterator hi=m.begin();
    while(hi != m.end()){
        cout<<hi->first <<" "<<hi->second<<endl;
        hi++;
    }
    return 0;
}