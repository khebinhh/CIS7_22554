#include <algorithm>
#include <iostream>
using namespace std;

int sumOfGP(int a , int r, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + a;
        a = a * r;
    }
    return sum;
}
int main(){
    float a = 2, r = 0.25;
    int n = 8;
    cout << sumOfGP(a, r, n) << endl;
    return 0;
}