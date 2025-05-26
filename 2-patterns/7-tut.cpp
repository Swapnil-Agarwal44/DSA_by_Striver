// to create the pattern 

//  A
//  A B
//  A B C 
//  A B C D


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
        for(int j=65; j<=65+i; j++){
            cout<<char(j);
        }
        cout<<endl;

        // in this code, we are using the ascii codes for the letters to print them. Used ai to just know how to print letters using ascii. The logic is still built without it. 
    }
}

int main(){
    int a;
    cin>>a;
    pattern2(a);
    return 0; 
}

//pattern code 