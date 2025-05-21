// to create the pattern 

//    *******
//     *****
//      ***
//       *


#include<bits/stdc++.h>
using namespace std;

void triangle(int n){
    for (int i = 0 ; i<n; i++){
        for (int j = 1 ; j<= 2*(n-i)-1; j++){
            cout<<"*";
        }
        cout<<endl;
        //this code will generate the pattern without taking spaces into consideration
    }
}

void triangle2(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<i; j++){
            cout<<" ";
        }

        for (int j=0; j<2*(n-i)-1; j++){
            cout<<"*";
        }

        for (int j=0; j<i; j++){
            cout<<" ";
        }
            cout<<endl;
    }

}

int main(){
    int a;
    cin>>a;
    // triangle(a);
    triangle2(a);
    return 0;
}