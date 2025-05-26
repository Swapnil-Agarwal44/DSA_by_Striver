// to create the pattern 

// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

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
    for(int i =0; i<2*n-1; i++){
        for(int j =0; j<2*n-1; j++){
            int top=i; 
            int left=j;
            int right=(2*n-2)-j;
            int down=(2*n-2)-i; 
            cout<<(n-min(min(top, down), min(left, right)));
        }
        cout<<endl;

        //this is a very tricky question, wasn't able to solve myself. Had to watch the tutorial. To solve this question, we have to first understand the pattern, however, it is not a simple one which we can implement with just loops. Watch the video to fully understand it. 
    }
}

int main(){
    int a;
    cin>>a;
    pattern2(a);
    return 0; 
}

//pattern code 