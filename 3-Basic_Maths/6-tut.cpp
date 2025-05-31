// // You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.



// You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.



// A number which completely divides another number is called it's divisor.


// Examples:
// Input: n = 6

// Output = [1, 2, 3, 6]

// Explanation: The divisors of 6 are 1, 2, 3, 6.

// Input: n = 8

// Output: [1, 2, 4, 8]

// Explanation: The divisors of 8 are 1, 2, 4, 8.

#include<bits/stdc++.h>
using namespace std;

void divisors_1(int n){
   //This methos simply traverse through the numbers till n/2, and check if the numbers are divisors of the given number or not. 
   for(int i=1; i<n/2; i++){
        if(n%i==0) cout<<i<<endl;
   }
   cout<<n;
   //Very easy approach with time complexity O(N). This can be significantly improved by the next method.
}

void findDivisors(int n) {
    //This code is given by ai. This code gives the time complexity of O(N^0.5). Although this code also uses vectors and sorting, we can just directly print the numbers as we find them through this logic. 
    vector<int> divisors;
    
    for (int i = 1; i * i <= n; i++) { // Loop till √N
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) // Avoid duplicate if i * i = n
                divisors.push_back(n / i);
        }
    }

    // Sorting for ordered output
    sort(divisors.begin(), divisors.end());

    cout << "Divisors: ";
    for (int d : divisors)
        cout << d << " ";
    cout << endl;
}


int main(){
    int number; 
    cout<<"Enter the number :";
    cin>>number;
    divisors_1(number);
    return 0; 
}