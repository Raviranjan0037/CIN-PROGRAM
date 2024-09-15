// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Number of rows:-";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<2*j-1<<" "; 
//         }
//         cout<<endl;
//     }
// }


//2nd method
//#include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Number of rows:-";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*i-1;j+=2){
//             cout<<j<<" "; 
//         }
//         cout<<endl;
//     }
// }


//3rd method
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number of rows:-";
    cin>>n;
    for(int i=1;i<=n;i++){
        int a = 1;
        for(int j=1;j<=i;j++){
            cout<<a<<" "; 
            a += 2;
        }
        cout<<endl;
    }
}