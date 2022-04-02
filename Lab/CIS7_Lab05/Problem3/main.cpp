#include <iostream>
#include <algorithm>
using namespace std;

// Return value of Binomial Coefficient C(n, r)
int binomialCoeff(int n, int r){
    int res = 1;

    // Since C(n,r) = C(n, n-r)
    if (r > n - r)
        r = n - r;
    
    // Calculate value of
    // [n * (n - 1) *---* (n-r+1)] / [r * (r-1) *---* 1]
    for (int i = 0; i < r; ++i){
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

// Driver Code
int main(){
    int n = 9, r = 4;
    cout <<  "Value of C(" << n << ", " << r << ") is "
            << binomialCoeff(n, r);
    return 0;
}