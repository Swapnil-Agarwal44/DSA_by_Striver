// You are given an integer n. You need to check whether the number is a palindrome number or not. Return true if it's a palindrome number, otherwise return false.

// A palindrome number is a number which reads the same both left to right and right to left.


// Examples:
// Input: n = 121

// Output: true

// Explanation: When read from left to right : 121.

// When read from right to left : 121.

// Input: n = 123

// Output: false

// Explanation: When read from left to right : 123.

// When read from right to left : 321.


#include<bits/stdc++.h>
using namespace std;

void reverseNumber(int n){
    int a=0; 
    int number = n;
    int lastDigit=0;
    while(n>0){
        lastDigit = n%10;
        n=n/10;
        a=(a*10) + lastDigit;  // this important step was learned by watching the video 
    }
    // cout<<"The reversed number is :"<<a;
    if(a==number){
            cout<<"The given number is a palindrome";
    }
    else 
    cout<<"The given number is not a palindrome";
}

void checkNumber2(int n){
    int count = int(log10(n)+1); // as per the tutorial, we can also use the concept of log 10 to find the number of digits of the number. 
    cout<<"The number of digits in the given number is :" << count << endl;
}

int main(){
    int number; 
    cin>>number; 
    reverseNumber(number);
    return 0; 
}