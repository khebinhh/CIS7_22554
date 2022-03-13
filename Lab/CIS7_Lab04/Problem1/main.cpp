#include <iostream>
#include <algorithm>    //permutation

int main(){
    int myints[] = {0,1,2,3,4,};
    //sort the array in ascending order up to 4 elements
    std::sort (myints, myints+4);

    std::cout << "The 4! possible permutations with 4 elements:\n";

    int i=1;
    do{
        //print the elements in the arrays
        std::cout << i << ": " << myints[0] << ' ' << myints[1] << " " << myints[2] << " " << myints[3] << '\n';
        i++;
        //permutation stops when array is in descending order
        //if the while condition is flase at the first time, the array will be sorted ascending regardless.
    }
    while(std::next_permutation(myints, myints+4));

    std::cout << "After loop: " << myints[0] << ' ' << myints[1] << ' ' << myints[2] << ' ' << myints[3] << ' ' << '\n';
    return 0;
}