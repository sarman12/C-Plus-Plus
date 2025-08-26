#include <bits/stdc++.h>
using namespace std;

class SGTree{
    vector<int> seg;
    public:
    SGTree(int n){
        seg.resize(4*n);
    }

    void build(int index,int low,int high,vector<int> &arr){
        if(low == high){
            seg[index]=arr[low];
            return;
        }
        int mid=low+(high-low)/2;
        build(2*index+1,low,mid,arr);
        build(2*index+2,mid+1,high,arr);
        seg[index]=seg[2*index+1]+seg[2*index+2];
    }
    int query(int index,int low,int high,vector<int>& arr,int l,int r){
        if(l > high or r < low){
            return 0;
        }  
        else if( low >= l and high <= r){
            return seg[index];
        }
        int mid=low+(high-low)/2;
        int left=query(2*index+1,low,mid,arr,l,r);
        int right=query(2*index+2,mid+1,high,arr,l,r);
        return left+right;

    }
    void update(int index,int low,int high,int index_to_change,int val){
        if (low == high)
        {
            seg[index] = val;
            return;
        }

        int mid=low+(high-low)/2;

        if (index_to_change <= mid)
        {
            update(2*index+1,low,mid,index_to_change,val);
        }
        else{
            update(2 * index + 2, mid+1, high, index_to_change, val);
        }
        seg[index] = seg[2 * index + 1] + seg[2 * index + 2];
    }

};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0 ;i<n;i++) cin>>arr[i];

        SGTree s1(n);
        s1.build(0,0,n-1,arr);
        int q;
        cin>>q;
        while(q--){
            int type;
            cin>>type;
            if(type == 1){
                int l1,r1;
                cin>>l1>>r1;
                cout<<s1.query(0,0,n-1,arr,l1,r1)<<endl;
            }
            else{
                int index, val;
                cin >> index >> val;
                s1.update(0, 0, n - 1, index, val);
                arr[index]=val;
            }
        }
        cout<<endl;
    }

}