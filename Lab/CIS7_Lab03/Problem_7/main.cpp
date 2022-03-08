#include <iostream>
#include <set>

int main(){
    std::set<int> myset;

    myset.insert(20);
    myset.insert(30);
    myset.insert(10);

    std::cout << "myset contains:";

    while (!myset.empty()){                     //while loop displays ' ' along with
        std::cout << ' ' << *myset.begin();     //the next ascending number until 
        myset.erase(myset.begin());             //there is no more elements from myset
    }
    std::cout <<'\n';

    return 0;
}