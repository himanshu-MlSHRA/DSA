#include <iostream>
using namespace std;

double min(double a,double b) {
    if(a<b) {
        cout<< a <<" is minimum";
    }else {
        cout << b <<" is minimum"; 
    }
}
int main() {
    cout << min(10.5,9) << endl;
}