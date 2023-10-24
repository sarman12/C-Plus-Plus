#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[] ,int n ,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left <= n && arr[largest] <  arr[left]){
        largest=left;
    }
    if(right <= n && arr[largest] <  arr[right]){
        largest=right;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[] , int n){
    int t=n;
    while(t > 1){
        swap(arr[t],arr[1]);
        t--;
        heapify(arr,t,1);
    }
}
int main(){
    
    int arr[8] = {-1,54,53,55,52,50,80,100};
    int n=7;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"print the array now" <<endl;
    for(int i=1;i <=n;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
    heapsort(arr,n);
    cout<<"print the array now in sorted order -> " <<endl;
    for(int i=1;i <=n;i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;


    // using priority_queue  building MAX heap
    cout<<"using priority_queue  building MAX heap" <<endl;
    priority_queue<int> ans;
    ans.push(10);
    ans.push(3);
    ans.push(8);
    ans.push(20);
    ans.push(6);
    ans.push(45);
    cout<< "top element -> " << ans.top()<<endl;
    ans.pop();
    cout<< "top element -> " << ans.top()<<endl;
    cout<<"size of max heap -> " << ans.size()<<endl;
    if(ans.empty()){
        cout<<"maxheap is empty" <<endl;
    }else{
        cout<<"maxheap is not empty"<<endl;
    }
    // using priority_queue buliding MIN heap
    cout<<"using priority_queue buliding MIN heap"<<endl;
    priority_queue<int,vector<int> ,greater<int>> min;
    min.push(10);
    min.push(3);
    min.push(8);
    min.push(20);
    min.push(6);
    min.push(45);
        cout<< "top element -> " <<min.top()<<endl;
    min.pop();
        cout<< "top element -> " <<min.top()<<endl;
        cout<<"size ofmin heap -> " << min.size()<<endl;
        if(min.empty()){
            cout<<"minheap is empty" <<endl;
        }else{
            cout<<"minheap is not empty"<<endl;
        }
    return 0;
}