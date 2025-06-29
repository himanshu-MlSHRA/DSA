#include <iostream>
using namespace std;

int fact(int num) {
    int fact=1;
    
    for(int i=1; i<=num; i++) {
        fact= fact*i;
    }
    return fact;

}



int main() {
    int n,r;
    cout <<"Enter 'N': ";
    cin >> n;
    cout <<"Enter 'R': ";
    cin >> r;
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_m =fact(n-r);
    int final = fact_n/(fact_r*fact_m);

    cout <<"Given nCr: " << final <<endl;
    return 0;
}