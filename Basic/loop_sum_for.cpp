#include <iostream>
using namespace std;

int main(){
    int n,i=1,sum=0;
    cout <<"Enter the number :";
    cin >> n;
    for(int i=1; i<=n; i++){
        sum += i;
    } 
    cout <<"Sum= " <<sum;
}
// even sum of 1 to n using for loop
// #include <iostream>
// using namespace std;

// int main(){
//     int n,i=1,sum=0;
//     cout <<"Enter the number :";
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         if(i%2 == 0){
//        sum += i;
//         }
//     } 
//     cout <<"Sum= " <<sum;
// }