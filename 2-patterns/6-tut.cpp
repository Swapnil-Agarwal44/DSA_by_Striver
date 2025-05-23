// to create the pattern 

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15


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
    int a=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<a;
            a++;
            cout<<" ";
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