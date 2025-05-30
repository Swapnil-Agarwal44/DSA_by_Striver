// You are given an integer n. You need to return the number of digits in the number.



// The number will have no leading zeroes, except when the number is 0 itself.


// Examples:
// Input: n = 4

// Output: 1

// Explanation: There is only 1 digit in 4.

// Input: n = 14

// Output: 2

// Explanation: There are 2 digits in 14.

#include<bits/stdc++.h>
using namespace std;

void checkNumber(int n){
    int a=0; 
       if(n == 0) {
        cout<<"The number of digits in the given number is : 1"<<endl;
        return;
    }
    while(n>0){
        n=n/10; 
        a++;
    }
    cout<<"The number of digits in the given number is :" << a << endl;
}

void checkNumber2(int n){
    int count = int(log10(n)+1); // as per the tutorial, we can also use the concept of log 10 to find the number of digits of the number. 
    cout<<"The number of digits in the given number is :" << count << endl;
}

int main(){
    int number; 
    cin>>number; 
    // checkNumber(number);
    checkNumber2(number);
    return 0; 
}