//Take 3 number print smallest of them.

#include <iostream>
using namespace std;
int main() {
    
    int a,b,c;
    cout<<"Enter 1st Number:-";
    cin>>a;
    
    cout<<"Enter 2nd Number:-";
    cin>>b;
    
    cout<<"Enter 3rd Number:-";
    cin>>c;
    
  if(a<b and a<c){
      cout<<a;
      cout<<" Is Smallest";
  }
  else if(b<a and b<c){
      cout<<b;
      cout<<" Is Smallest";
    }
 else{
        cout<<c;
      cout<<" Is Smallest";
    }
}




//Take 2 number print smallest of them.

// #include <iostream>
// using namespace std;
// int main() {
    
//     int a,b;
//     cout<<"Enter 1st Number:-";
//     cin>>a;
    
//     cout<<"Enter 2nd Number:-";
//     cin>>b;
    
//   if(a<b){
//       cout<<a;
//       cout<<" Is Smallest";
//     }
//     else{
//         cout<<b;
//       cout<<" Is smallest";
//     }
//}