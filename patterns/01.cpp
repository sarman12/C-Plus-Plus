#include<bits/stdc++.h>

using namespace std;
int first(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int second(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
    }

}
int third(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int fourth(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
int fifth(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int six(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void seventh(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*"; 
        }
        for(int j=1;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;

    }
    
}
int eight(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*n-2*i+1);j++){
            cout<<"*";
        }
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<endl;

    }

}
int nine(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*"; 
        }
        for(int j=1;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;

    }
        
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*n-2*i+1);j++){
            cout<<"*";
        }
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<endl;

    }


    
}

int ten(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=0;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int eleven(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int spaces=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;

        }
        cout<<endl;
        spaces -=2;
    }
}
int twelve(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (char j='A';j<= 'A'+(n-i+1);j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int thirteen(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";

        }
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}
int main(){
    first();
    second();
    third();
    fourth();
    fifth();
    six();
    seventh();
    eight();
    nine();
    ten();
    eleven();
    twelve();
    thirteen();
    return 0;
}