#include <iostream>
using namespace std;
/*
    Boolalpha is used to print bool value only
*/
int main(){
    cout << true << endl;
    cout << !false << endl; //NOT false creates a true value

    cout << boolalpha;

    cout << true << endl;
    cout << !false << endl;

    return 0;
}