#include <iostream>
using namespace std;

int main(){
    int i,n;
    bool isPrime=true;
    cout <<"Enter the number: ";
    cin >>n;
    for(i=2;i<=n-1;i++){
        if(n%i == 0){
            isPrime=false;
            break;
        }
    }

    if(isPrime == true){
        cout << n <<" is a prime number!\n";
    }else{
        cout << n <<" is not a prime number!";
    }
    return 0;
}