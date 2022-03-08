#include <iostream>
#include <set>

int main(){
    int myints[] = {55, 23, 65, 42, 33};        //the output will reorganize the positions of the array
    std::set<int> myset (myints, myints+5);

    std::cout << "myset contains:";
    for (std::set<int>::iterator it=myset.begin(); it != myset.end(); ++it)
    std::cout << ' ' << *it;

    std::cout << '\n';

    // 23 switches to the front of the array and 33 will be placed in the second position
    // 65 will now be at the end of the array and 55 will be at the 4th position

    return 0;
}