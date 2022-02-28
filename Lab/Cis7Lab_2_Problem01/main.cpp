#include <iostream>
using namespace std;

int main(){
    unsigned int p = 40;                                //binary  40 = 10 1000
    unsigned int q = 17;                                //binary  17 = 01 0001
    int result = 0;

    result = p & q;                                     //binary   0 = 00 0000
    cout << "Result of P&Q is : " << result << endl;
    
    result = p | q;                                     //binary  57 = 11 1001
    cout << "Result of P|Q is : " << result << endl;

    result = p ^ q;                                     //binary  57 = 11 1001
    cout << "Result of P^Q is : " << result << endl;    //NOTE that binary 1 did not overlap

    result = ~p;                                        //binary -41 = 01 0111 
    cout << "Result of ~P is : " << result << endl;     //NOTE we flip the bits and add one to be negative

    result = ~(p & q);                                  //binary - 1 = 00 0001
    cout << "Result of P~&Q is : " << result << endl;   //NOTE p&q equal to 0 and we flip 
                                                        //the bits and add one to be negative
    result = ~(p | q);
    cout << "Result of P~|Q is : " << result << endl;   //binary -58 = 00 0110

    result = p << 3;                                    //binary 320 = 1 0100 0000
    cout << "Result of P<<3 is : " << result << endl;

    result = p >> 3;                                    //binary   5 = 00 0101
    cout << "Result of P>>3 is : " << result << endl;

    return 0;
}