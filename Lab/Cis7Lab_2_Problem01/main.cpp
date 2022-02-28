#include <iostream>
using namespace std;

int main(){
    unsigned int p = 40;                                //binary 40 = 101000
    unsigned int q = 17;                                //binary 40 =  10001
    int result = 0;

    result = p & q;                                     //binary 0 = 000000
    cout << "Result of P&Q is : " << result << endl;
    
    result = p | q;                                     //binary 57 = 111001
    cout << "Result of P|Q is : " << result << endl;

    result = p ^ q;                                     //binary 57 = 111001
    cout << "Result of P^Q is : " << result << endl;    //note that binary 1 did not overlap

    result = ~p;                                        //binary 23 = 10111
    cout << "Result of ~P is : " << result << endl;

    result = ~(p & q);
    cout << "Result of P~&Q is : " << result << endl;

    result = ~(p | q);
    cout << "Result of P~|Q is : " << result << endl;

    result = p << 3;
    cout << "Result of P<<2 is : " << result << endl;

    result = p >> 3;
    cout << "Result of P>>2 is : " << result << endl;

    return 0;
}