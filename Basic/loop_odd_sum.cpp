#include <iostream>
using namespace std;

int main(){
    int i=1,n,sum=0;
    cout <<"Enter the number: ";
    cin >> n;
    for(int i=1;i<=n;i+=2){
        sum +=i;
    }
    cout <<"Sum = "<<sum;
}


//using while loop
// #include <iostream>
// using namespace std;

// int main(){
//     int n,i=1,sum=0;
//     cout <<"Enter the number :";
//     cin >>n;
//     while(i<=n){
//         if(i%2 != 0){
//             sum +=i;
//         }
//         i++;
//     }
//     cout <<"Sum= " <<sum;
// }

