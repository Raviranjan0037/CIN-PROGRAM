                       //Print NUMBER TRIANGLE(2).
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of rows:-";
    cin>>n;
    for(int i=1;i<=n;i--){
        for(int j=4;j<=i;j--){
            cout<<j<<" "; 
        }
        cout<<endl;
    }
}