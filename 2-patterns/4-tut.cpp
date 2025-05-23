// to create the pattern 

//   1 
//   0 1   
//   1 0 1  
//   0 1 0 1
//   1 0 1 0 1
//       

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
        if (i%2==0){
            for (int j=1; j<=i; j++){
                if(j%2==0){
                    cout<<"1";
                }else{
                    cout<<"0";
                }
            }
        }else{
            for (int j=1; j<=i; j++){
                if(j%2==0){
                    cout<<"0";
                }else{
                    cout<<"1";
                }
            }
        }
        cout<<endl;
    }
}

int main(){
    int a;
    cin>>a;
    // pattern(a);
    pattern2(a);
    return 0;
}