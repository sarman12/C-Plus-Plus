#include<bits/stdc++.h>
using namespace std;
// class hero{
//     // function overloading 
//     public:
//     void sayhell0(){
//         cout<<"hello world? "<<endl;
//     }
//     void sayhell0(string name){
//         cout<<"hello "<<name<<"? "<<endl;
        
//     }
// };
class vro{
    // operator overloading
    public:
    int a;
    int b;

    public:
    void add(){
        return a+b;
    }
    void operator+(b &obj){
        int value1 = this-> a;
        int value2 = obj.a;
        cout<<"output" << value2-value1<<endl;

    }
};
int main(){
    vro h1,h2;
    h1.a=4;
    h2.a=9;
    h1 + h2;
    // h2.operator+();
}