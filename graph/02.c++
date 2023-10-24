#include<bits/stdc++.h>
using namespace std;
using LL = long long;
const int v=4;
int main(){
    int graph[v][v];
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(i!=j){
                graph[i][j]=1;
            }
            else if(i==j){
                graph[i][j]=0;
            }

        }

    }
    graph[0][1]=1;
    graph[0][3]=1;
    graph[1][0]=1;
    graph[1][2]=1;
    graph[2][1]=1;
    graph[2][3]=1;
    graph[3][2];
    graph[3][0];
    cout<<"The graph is -> "<<endl;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}