#include <iostream>
using namespace std;
int main() {
    int i,n;
    cout<<"enter n:-";
    cin>>n;
    bool flag = true;         // true means prime number
    for(i=2; i<=n/2; i++){
        if(n%i==0){
           flag = false;    // false meanse composite number
           break;
        }   
    }
    if(n==1)
       cout<<"neither prime nor composite";
    else if(flag==true)
            cout<<"prime";
    else
        cout<<"composite";
 }