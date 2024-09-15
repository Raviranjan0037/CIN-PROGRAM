          //Display this AP=4,7,10,13,16......upto n term.(where nth term-3*n+1)
//method=1
// #include <iostream>
// using namespace std;
// int main() {

//     int i,n;
//     cout<<"enter n:-";
//     cin>>n;
//     for(int i=4;i<=3*n+1;i=i+3){
//     cout<<i<<" ";
//     }
    
// }



//2nd method
#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"enter n:-";
    cin>>n;
    int a=4;
    for(int i=1;i<=n;i++){
    cout<<a<<" ";
    a = a+3;
    }
    
}