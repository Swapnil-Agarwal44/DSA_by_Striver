// to create the pattern 

//     A 
//    ABA
//   ABCBA
//  ABCDCBA


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
        for(int j=n-i-1; j>0; j--){
            cout<<" ";
        }
        for(int j=65; j<=65+i; j++){
            cout<<char(j);
        }
        for(int j=66+i-1; j>65; j--){
            cout<<char(j-1);
        }
         for(int j=n-i-1; j>0; j--){
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