                // Print Even Or Odd Number by Using TERNARY OPERATR.
#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"Enter The Value Of N:-";
    cin>>n;
    //(condition)? if true: if false;
    (n%2==0)?  cout<<"Even Number": cout<<"Odd Number";
}