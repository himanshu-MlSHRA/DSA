#include <iostream>
using namespace std;

int main() {
    int i,n,sum=0;
    cout <<"Enter the number: ";
    cin >> n;
    for(i=1;i<=n;i++){
        if(i%3 == 0){
            sum = sum+i;
        }
    }
    cout <<"Sum of number form 1 to " << i-1 <<" divisible by 3 = " <<sum;
    return 0;
}