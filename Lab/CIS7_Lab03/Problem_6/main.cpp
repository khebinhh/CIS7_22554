#include <iostream>
#include <set>

int main(){
    std::set<int> myset;

    myset.insert (100);
    myset.insert (200);
    myset.insert (300);

    std::cout << "myset contains:";
    for (std::set<int>::iterator it = myset.begin(); it != myset.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    myset.insert(0);  //insert element 0 to myset
    myset.insert (1101);
    myset.insert (2202);

    //insert two new elements in myset, display
    std::cout << "myset contains:";
    for (std::set<int>::iterator it = myset.begin(); it != myset.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    //myset contains 6 elements 0, 100, 200, 300, 1101, 2202
    return 0;
}