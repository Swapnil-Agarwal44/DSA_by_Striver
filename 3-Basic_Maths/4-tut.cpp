// You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.



// The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.


// Examples:
// Input: n1 = 4, n2 = 6

// Output: 2

// Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

// Greatest Common divisor = 2.

// Input: n1 = 9, n2 = 8

// Output: 1

// Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.

// Greatest Common divisor = 1.


#include<bits/stdc++.h>
using namespace std;

void hcf(int a, int b){
    while(b!=0){
        int t = a%b;
        a=b;
        b=t;
    }
    cout<<"The HCF of the two numbers is: "<<a;
}

int main(){
    int a, b; 
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    hcf(a, b);
    return 0; 
}