//divisible by 5 or 3 and not divisble by 15.
#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"enter n:-";
    cin>>n;
    if((n%5==0 or n%3==0) and (n%15!=0)){
    cout<<"divisivle by 5 or 3 and divisible by 15";
    }
    else{
        cout<<"not divisible by 5 or 3 and 15";
    }

}