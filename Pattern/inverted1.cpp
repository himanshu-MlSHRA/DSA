#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter the number: ";
    cin >>n;
    for(int i=0; i<n; i++) {
        //spaces
        for(int j=0; j<i; j++) {
            cout << " ";
        }
        //nums
        for(int j=0; j<n-i; j++) {
            cout <<i+1;
        }
        cout <<endl;
    }
    return 0;
}