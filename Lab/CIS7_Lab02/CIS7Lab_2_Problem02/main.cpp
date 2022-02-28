#include <iostream>
using namespace std;

int main(){
    std::cout << false << std::endl;    //true evaluates to 1
    std::cout << !false << std::endl;   //!true evaluates to 0
    
    bool b(true);
    std::cout << b << std::endl;        // b is false, which evaluates to 0
    std::cout << !b << std::endl;       // !b is true, which evaluates to 1
    return 0;
}