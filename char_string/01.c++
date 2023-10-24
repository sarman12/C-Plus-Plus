#include<bits/stdc++.h>
using namespace std;
void reverse(char name[],int l){
    int s=0;
    int e=l-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }

}
int getleght(char name[]){
    int count=0;
    for(int i=0;name[i] != '\0' ;i++){
        count++;
    }
    return count;
}
int main(){
    char name[100];
    cout<<"ENTER YOUR NAME->";
    cin>>name;
    int r=getleght(name);
    cout<<"The length of thhe string is"<<getleght(name);
    cout<<endl;
    reverse(name,r);
    cout<<name;
    return 0;
}