                       //Print NUMBER TRIANGLE(2).
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the sides of  square:-";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" "; 
        }
        cout<<endl;
    }
}