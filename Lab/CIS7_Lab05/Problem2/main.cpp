#include <iostream>
#include <algorithm>
using namespace std;

// Return value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int r){
    //base cases
    if (r == 0 || r == n)
        return 1;

    //recursive
    return binomialCoeff(n - 1, r - 1) + binomialCoeff(n - 1, r);
}

//driver code
int main(){
    int n = 5, r = 3;
    cout << "Value of C(" << n << ", " << r << ") is " << binomialCoeff(n, r);
    return 0;
}