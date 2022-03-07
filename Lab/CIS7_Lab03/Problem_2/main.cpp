#include <iostream>
#include <set>

int main(){
    std::set<int> myset;                //declare set myset
    std::set<int>::iterator it;         //declare iterator called it
    std::pair<std::set<int>::iterator, bool> ret;

    //set some initial values
    for (int i=1; i<=5; ++i) myset.insert(i*100);    //set: 10 20 30 40 50

    ret = myset.insert(200);         //no new element inserted

    if (ret.second==false) it=ret.first; //"it" now have point sot element 20
    
    myset.insert (it, 250);  //max efficiency inserting
    myset.insert (it, 240);  //max efficiency inserting
    myset.insert (it, 260);  //no max efficiency inserting
    myset.insert (it, 300);  //already inserted
    myset.insert (it, 400);  //already inserted
    myset.insert (it, 500);  //already inserted
    myset.insert (it, 600);  //max efficiency inserting

    int myints[] = {50, 100, 150};    //50 and 150 are added
    myset.insert (myints, myints+3);

    std::cout << "myset contains:";
    for (it=myset.begin(); it != myset.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}