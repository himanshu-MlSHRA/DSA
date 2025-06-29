#include <iostream>
using namespace std;

int sumOfDigits() {
    int num,digSum = 0;
    cout <<"Enter the number: ";
    cin >>num;
    while(num > 0) {
        int fdigit =num % 10;
        num /= 10;
        digSum += fdigit;
    }
    return digSum;
}
int main() {
    cout <<"Sum of all the digits of numbers: " << sumOfDigits() << endl;
}