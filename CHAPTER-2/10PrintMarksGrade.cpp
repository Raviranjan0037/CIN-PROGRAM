//print the grade according to grade.{(1)81-100VeryGood,(2)61-80Good,(3)41-60Avarage,(4)<=40 Fail}
// #include <iostream>
// using namespace std;
// int main() {
    
//     int n;
//     cout<<"Enter marks:-";
//     cin>>n;
//     if(n>=81 and n<=100){
//         cout<<"Very Good";
//     }
//     if(n>=61 and n<=80){
//         cout<<"Good";
//     }
//     if(n>=41 and n<=60){
//         cout<<"Avarage";
//     }
//     if(n<=41){
//         cout<<"Fail";
//     }
// }
    
    
//2nd method  

// #include <iostream>
// using namespace std;
// int main() {
    
//     int n;
//     cout<<"Enter marks:-";
//     cin>>n;
    
//     if(n>=81 and n<=100){
//         cout<<"Very Good";
//     }
//     else if(n>=61 and n<=80){
//         cout<<"Good";
//     }
//     else if(n>=41 and n<=60){
//         cout<<"Avarage";
//     }
//     else{
//         cout<<"Fail";
//     }
//}
  
  
  
//3rd method 

#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"Enter marks:-";
    cin>>n;
    if(n>=81 and n<=100){
        cout<<"Very Good";
    }
    else if(n>=61){
        cout<<"Good";
    }
    else if(n>=41){
        cout<<"Avarage";
    }
    else{
        cout<<"Fail";
    }
}
      