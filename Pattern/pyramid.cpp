#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter the number: ";
    cin >>n;
    for(int i=0; i<n; i++) {
        //spaces
        for(int j=0; j<n-i-1; j++) {
            cout <<" ";
        }
        //nums1
        for(int j=1; j<=i+1; j++) {
            cout << j;
        }
        //nums2
        for(int j=i; j>0; j--) {
            cout << j;
        }
        cout <<endl;
    }
    return 0;
}