                //Print HIGHEST FACTOR of N.(using BREAK rule)
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n:-";
    cin>>n;
    for(int i=n%2;i>=n;i--){
        if(n%i==0){
           cout<<i<<" ";
           break;
        }
    }
}