// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.


// Examples:
// Input: n = 25

// Output: 52

// Explanation: Reverse of 25 is 52.

// Input: n = 123

// Output: 321

// Explanation: Reverse of 123 is 321.

// Constraints:
// 0 <= n <= 5000
// n will contain no leading zeroes except when it is 0 itself.


#include<bits/stdc++.h>
using namespace std;

void reverseNumber(int n){
    int a=0; 
    int lastDigit=0;
    while(n>0){
        lastDigit = n%10;
        n=n/10;
        a=(a*10) + lastDigit;  // this important step was learned by watching the video 
    }
    cout<<"The reverse of the number is :"<< a<<endl;
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