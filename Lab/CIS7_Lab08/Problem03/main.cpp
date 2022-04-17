#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    double a, d, n , i, sum, j;

        cout << "Enter starting value ";
        cin >> a;
        cout << "Enter difference ";
        cin >> d;
        cout << "Enter the term ";
        cin >> n;
        cout << endl;
        
    for (int i = a; i < ((n)* d + a); i+=d){
        sum += i ;
        cout << i << " is the sum";
        return 0;
    }
}