#include<iostream>
using namespace std;
int main(){
    int marks; 
    cin >> marks;
    if (marks<100){
        cout<<"f";
    }
    else if (marks<75){
        cout <<"c";
    }
    else if (marks<50){
        cout<<"b";
    }
    else {
        cout<< "a";
    }
    return 0;
}