#include<bits/stdc++.h>
// #include "hero.cpp"
using namespace std;
class hero{
    private:
   
    int health;
    
    public:
    char level;
    char *name;
    hero(){
        cout<<"this is my constructor"<<endl;
        name=new char[100];
    }
    hero(char level,int health){
        this->level=level;
        this->health=health;
    }
    int print(){
        cout<<endl;
        cout<<"["<<"Name -> " <<this->name<<" :";
        cout<<"HEalth ->" << this->health<<" :";
        cout<<"level ->" << this->level<<" ]";
        cout<<endl;
        cout<<endl;
    }
    //cpopy constructor
    hero(hero& temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
         cout<<"copy constructiror"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch){
        level=ch;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }

};
int main(){
    // //staticslly
    // hero h1(7,10);
    // h1.print();
    // hero h2(h1);
    // h2.print();

   hero h1;
   h1.sethealth(12);
   h1.setlevel('A');
   char name[10]="Arman";
   h1.setname(name);
   h1.print();

   hero h2(h1);
   h2.print();
   h1.name[0]='S';
   h1.print();
   h2.print();
   

//     h1.sethealth(100);
//     cout<<"health is :"<<h1.gethealth()<<endl;
//     cout<<"level is :" <<h1.level<<endl;
//     cout<<"DYnamically->"<<endl;
//     hero *h=new hero;
//     (*h).sethealth(99);
//     cout<<"health is :" << (*h).gethealth()<<endl;
//     cout<<"level is :" << (*h).level<<endl;
// //     h1.sethealth(100);
//     h1.setlevel(10);
//    cout<<"size of : " <<sizeof(h1)<<endl;
//    cout<<h1.gethealth()<<endl;
//    cout<<h1.getlevel()<<endl;
//     return 0;
}
