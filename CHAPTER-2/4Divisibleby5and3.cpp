//Take positive integer input and tell if it divisible by 5 and 3.
#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter n:-";
    cin>>n;
    if(n%5==0 && n%3==0){                 // use (and=&&)
        cout<<"Divisible by 5 and 3";
    }
    else{
        cout<<"Not divisible by 5 and 3";
    }
}