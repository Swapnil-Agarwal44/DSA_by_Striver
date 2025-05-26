// to create the pattern 

// ****
// *  *
// *  *
// *  *
// ****

#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<"1";
    }
    cout<<endl;
}
}

void pattern2(int n){

    for(int i=0; i<n; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=0; i<n-1; i++){
        for(int i=1; i<2; i++){
            cout<<"*";
        }
        for(int i=1; i<=n-2; i++){
            cout<<" ";
        }
        for(int i=1; i<2; i++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        cout<<"*";
    }

}

int main(){
    int a;
    cin>>a;
    pattern2(a);
    return 0; 
}

//pattern code 