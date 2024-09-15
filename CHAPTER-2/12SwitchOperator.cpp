                          //SWITCH OPERATOR:-calculator using basic arthemetic operation (+,-,*,/)
// #include <iostream>
// using namespace std;
// int main() {
   
//     int n1,n2;
//     cout<<"enter n1:-";
//     cin>>n1;
//     char op;
//     cout<<"enter operator:-";
//     cin>>op;
//     cout<<"enter n2:-";
//     cin>>n2;
    
//     switch(op){
//         case '+':
//             cout<<n1+n2<<endl;
//           break;
//         case '-':
//             cout<<n1-n2<<endl;
//             break;
//         case '*':
//             cout<<n1*n2<<endl;
//             break;
//         case '/':
//             cout<<n1/n2<<endl;
//             break;
//             default:
//             cout<<"inva;id operator"<<endl;
//     }
    
// }



               //BY IF ELSE:-calculator using basic arthemetic operation (+,-,*,/)
#include <iostream>
using namespace std;
int main() {
   
    int n1,n2;
    cout<<"enter n1:-";
    cin>>n1;
    char op;
    cout<<"enter operator:-";
    cin>>op;
    cout<<endl;
    cout<<"enter n2:-";
    cin>>n2;
    
    if(op=='+') {       
        cout<<"Answer is:-";
        cout<<n1+n2;
    }
    if(op=='-') {
        cout<<"Answer is:-";
        cout<<n1-n2;
    }
    if(op=='*') {
        cout<<"Answer is:-";
        cout<<n1*n2;
    }
    if(op=='/') {
        cout<<"Answer is:-";
        cout<<n1/n2;
    }
    
}