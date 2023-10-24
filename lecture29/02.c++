// jaggged array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    cout<<"Enter the row number->";
    cin>>row;
    // int cols;
    // cin>>cols;
    int *number=new int[row];
    int** arr=new int*[row];
    for(int i=0;i<row;i++){
        cout<<"Enter no of col in row" << i << ": ";
        cin>>number[i];
        arr[i]=new int[number[i]];
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<number[i];j++){
            cin>>arr[i][j];
        }
        
    }
    cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<number[i];j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}