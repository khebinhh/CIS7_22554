#include <iostream>
#include <set>

int main(){
    int myints[] = {};        // no numbers are in the arrays
    std::set<int> myset (myints, myints+5);

    std::cout << "myset contains:";
    for (std::set<int>::iterator it=myset.begin(); it != myset.end(); ++it)
    std::cout << ' ' << *it;

    std::cout << '\n';

    return 0;
}