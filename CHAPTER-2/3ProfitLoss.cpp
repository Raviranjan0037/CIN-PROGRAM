//WAP to determine the selling has made or incurred loss or no profit no loss.also find how much profit he made or loss he incurred.

// #include <iostream>
// using namespace std;
// int main(){
    
//     int cp;
//     cout<<"Enter cost Price:-";
//     cin>>cp;
    
//     int sp;
//     cout<<"Enter Selling Price:-";
//     cin>>sp;
    
//     if(cp>sp)
//       cout<<"profit is "<<sp-cp;
//     if(cp<sp)
//       cout<<"loss is "<<cp-sp;
//     if(cp==sp)
//       cout<<"no profit no loss";
// }


// 2nd method
#include <iostream>
using namespace std;
int main(){
    
    int cp;
    cout<<"Enter cost Price:-";
    cin>>cp;
    
    int sp;
    cout<<"Enter Selling Price:-";
    cin>>sp;
    
    if(cp>sp){
      cout<<"profit is "<<sp-cp;
    }
    else if(cp<sp){
      cout<<"loss is "<<cp-sp;
    }
    else{
      cout<<"no profit no loss";
    }
}
