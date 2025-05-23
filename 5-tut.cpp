// to create the pattern 

// 1      1
// 12    21
// 123  321
// 12344321


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
    for(int i=1; i<=4; i++){
        for(int j=1;j<=i; j++){
            cout<<j;
        }

        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }

        for(int j=i; j>=1; j--){
            cout<<j;
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