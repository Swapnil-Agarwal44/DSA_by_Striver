// to create the pattern 

//       *
//      ***
//     *****
//    *******
//     *****
//      ***
//       *


#include<bits/stdc++.h>
using namespace std;

void triangle(int n){
    for (int i = 0 ; i<n; i++){
        for (int j = 0 ; j< 2*(n-i)-1; j++){
            cout<<"*";
        }
        cout<<endl;
        //this code will generate the pattern without taking spaces into consideration
    }
}

void triangle2(int n){

    // the logic used to implement this pattern is mostly same. It is divided in two parts.
    // In the first part, we create the half of the pattern, usign the ones we learned.
    // In the second part, we try to create the remaining pattern by establishing the proper relationship between variables

  for (int i=0; i<n; i++){
    for (int j=0; j<n-i-1; j++){
        cout<<" ";
    }

    for (int j=0; j<2*i+1; j++){
        cout<<"*";
    }

    for (int j=0; j<n-i-1; j++){
        cout<<" ";
    }
    cout<<endl;
  }

  for (int i=n; i>0; i--){
    for (int j=0; j<n-i+1; j++){
        cout<<" ";
    }

    for(int j=0; j<2*i-3;j++){  
        // calculating this formula was a little bit tricky. Calculated this condition by subtracting the space required for the blank spaces from the total spaces in the form of variables. For example - suppose the number given is 4. So a total of (4*2-2) = 7 lines will be printed. And this logic will start working after the middle line. Suppose we take the example of the line immediately after the middle line, i.e., 5th line. So total space of the line will be (4*2-1)=7 spaces, out of which 1 space will be required on both sides of the *, so we subtract 2(*) from 7, so remaining 5 spaces will be for the *. In this way, we created the logic.


        // IMPORTANT NOTICE: This code works pure mathematically to print the pattern. However, I have learned of another trick from the video, in which the guide created two functions, one for priniting the upper half, and one for printing the lower half, and calling these two functions one after another. So essentially, they just combined the previous two programs code, and executed them together. Also a smart move. 
        
        cout<<"*";
    }

    for (int j=0; j<n-i+1; j++){
        cout<<" ";
    }       

    cout<<endl;
    // for (int j=0)
  }

  //this code is written by me without checking the video and without any ai tools.
}

int main(){
    int a;
    cin>>a;
    // triangle(a);
    triangle2(a);
    return 0;
}