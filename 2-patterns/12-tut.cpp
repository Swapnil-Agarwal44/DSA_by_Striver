// to create the pattern 

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


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
        for(int j=n-i; j>=1; j--){
            cout<<"*";
        }
        for(int j=0; j<2*i; j++){
            cout<<" ";
        }
        for(int j=n-i; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int j=0; j<2*(n-i-1); j++){
            cout<<' ';
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}

int main(){
    int a;
    cin>>a;
    pattern2(a);
    return 0; 
}

//pattern code 