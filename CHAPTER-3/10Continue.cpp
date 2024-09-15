                       // //Print 1 to 10 EXCEPT 3 AND 8 Using continue.
// #include <iostream>
// using namespace std;
// int main() {
//     for(int i=1;i<=10;i++){
//         if(i!=3 && i!=8)
//         cout<<i<<" ";
//     }
// }



// //2nd method
// #include <iostream>
// using namespace std;
// int main() {
//     for(int i=1;i<=10;i++){
//         if(i==3 || i==8) continue;
//         cout<<i<<" ";
//     }
// }



//3rd method
#include <iostream>
using namespace std;
int main() {
    for(int i=1;i<=10;i++){
        if(i==3) continue;
        if(i==8) continue;
        cout<<i<<" ";
    }
}