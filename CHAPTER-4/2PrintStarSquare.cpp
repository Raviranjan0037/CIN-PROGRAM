                          //Print STAR SQUARE of n times.
#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"enter side of square:-";              
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}