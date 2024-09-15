#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows:-";
    cin>>n;
    for(int i=1;i<=n;i++){              //Row
        for(int j=1;j<=n-i;j++){        //space
            cout<<"  ";
         }
         for(int j=1;j<=i;j++){       //star
            cout<<(char)(j+64)<<" ";
         }
        cout<<endl;
    }
}