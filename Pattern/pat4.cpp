#include <iostream>
using namespace std;

int main() {
    int n;
    char ch='A';
    cout <<"Enter the number: ";
    cin >>n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {
            cout << ch;
        }
        cout <<endl;
        ch+=1;
    }
    return 0;

}
