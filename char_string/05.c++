#include<bits/stdc++.h>
using namespace std;
string delterepeat(string str,string part){
    while(str.length() != 0 && str.find(part) <str.length()){
        str.erase(str.find(part),part.length());
    }
    return str;
}
int main()
{
    string str;
    cin>>str;
    string part;
    cin>>part;
    cout<<"New line is -> "<<delterepeat(str,part)<<endl;
}