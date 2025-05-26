// to create the pattern 

// E 
// D E 
// C D E 
// B C D E 
// A B C D E


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
    for(int i=1; i<=n; i++){
        for(int j=65+n-i; j<65+n; j++){
            cout<<char(j);
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