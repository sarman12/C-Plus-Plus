#include<iostream>
// #include strings
using namespace std;
void digit1(int n,string arr[]){
    
    if(n == 0){
        return ;
    }
    int digit=n%10;
    n=n/10;
    // cout<<arr[digit]<<" ";
    digit1(n,arr);
    cout<<arr[digit]<<" ";


}
// int 03()
int main(){
    string arr[10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE"};
    int n;
    cin>>n;
    cout<<endl;
    digit1(n,arr);
    cout<<endl;
    return 0;
}