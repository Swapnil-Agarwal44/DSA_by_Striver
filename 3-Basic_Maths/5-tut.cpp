// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.



// An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.


// Examples:
// Input: n = 153

// Output: true

// Explanation: Number of digits : 3.

// 1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 1 + 125 + 27 = 153.

// Therefore, it is an Armstrong number.

// Input: n = 12

// Output: false

// Explanation: Number of digits : 2.

// 1 ^ 2 + 2 ^ 2 = 1 + 4 = 5.

// Therefore, it is not an Armstrong number.


#include<bits/stdc++.h>
using namespace std;

void armstrong(int number){
    int n=0;  //number of digits of number.
    int a=number;
    int b=number;
    int digit;
    int sum=0;
    while(a>0){
        a=a/10;
        n++;
    }
    // cout<<"digits are :"<<n;
    while(number>0){
        digit=number%10;
        number=number/10;
        sum = sum + pow(digit, n);
    }
    if(sum==b) cout<<"The given number is an Armstrong Number";
    else cout<<"The given number is not an Armstrong number";

 

}

int main(){
    int number; 
    cout<<"Enter the number :";
    cin>>number;
    armstrong(number);
    return 0; 
}