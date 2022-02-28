#include <iostream>
using namespace std;

int main(){
    cout << false << endl;    //true evaluates to 1
    cout << !false << endl;   //!true evaluates to 0
    
    bool b(true);
    cout << b << endl;        // b is false, which evaluates to 0
    cout << !b << endl;       // !b is true, which evaluates to 1
    return 0;
}