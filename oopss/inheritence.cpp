#include<bits/stdc++.h>
using namespace std;
class human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getage(){
        return this->age;
    }
    void setage(int a){
        this->age=a;
    }
    int getheight(){
        return this->height;
    }
};
class male: public human{
    public:
    string color;
    void sleep(){
        cout<<"Male sleeeping" <<endl;
    }
};
int main(){
    male laura;
    laura.setage(9);
    cout<<laura.getage()<<endl;
    laura.sleep();

}