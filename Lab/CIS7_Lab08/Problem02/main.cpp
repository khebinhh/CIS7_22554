#include <algorithm>
#include <iostream>
using namespace std;

int sumOfAP(int a, int d, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + a;
        a = a + d;
    }
    return sum;
}
int main(){
    int n = 30, a = 4, d = 10;
    cout << "Arthmetic sequence sum: " << sumOfAP(a, d, n);
    return 0;
}