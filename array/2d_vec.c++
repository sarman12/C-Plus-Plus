#include<bits/stdc++.h>
using namespace std;
// coloum number*row index + coloumn index
// int array(int arr[i][j],int n,int m)
bool ispresent(int arr[][3],int target,int n,int m){
    for(int n=0;n<3;n++){
        for(int m=0;m<3;m++){
            if(arr[n][m] == target){
                return 1;
            }
        }
        // cout<<endl;
    }
    return 0;
}
int printsum(int arr[][3],int row,int col){
    cout<<"row wise printing the sum ->  ";
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int printsum1(int arr[][3],int row,int col){
    cout<<"column wise printing the sum ->  ";
    for(int col=0;col<3;col++){
        int sum=0;
        for(int row=0;row<3;row++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3][3]={{1,11,111},{2,22,222},{3,33,333}};
    // cout<<"enter the number:";
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    cout<<"your array is: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout <<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the element to search:" <<endl;
    int target;
    cin>>target;
    if(ispresent(arr,target,3,3)){
        cout<< "Element found" <<endl;
    }
    else{
        cout<<"Not found"<<endl; 
    }
    printsum(arr,3,3);
    //cout<<"PRINTING THE SUM:" << ar<<endl;
    printsum1(arr,3,3);
    return 0;

}