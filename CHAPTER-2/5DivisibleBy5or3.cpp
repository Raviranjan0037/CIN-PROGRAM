//Take positive integer input and tell if it divisible by 5 or 3.
#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter n:-";
    cin>>n;
    if(n%5==0 or n%3==0){                 // use (or = ||)
        cout<<"Divisible by 5 or 3";
    }
    else{
        cout<<"Not divisible by 5 or 3";
    }
}